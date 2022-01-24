//
// Aspia Project
// Copyright (C) 2016-2022 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ROUTER__SERVER_H
#define ROUTER__SERVER_H

#include "base/net/network_server.h"
#include "base/peer/host_id.h"
#include "base/peer/server_authenticator_manager.h"
#include "build/build_config.h"
#include "proto/router_admin.pb.h"
#include "router/session.h"
#include "router/shared_key_pool.h"

namespace router {

class DatabaseFactory;
class SessionHost;
class SessionRelay;

class Server
    : public base::NetworkServer::Delegate,
      public SharedKeyPool::Delegate,
      public base::ServerAuthenticatorManager::Delegate,
      public Session::Delegate
{
public:
    explicit Server(std::shared_ptr<base::TaskRunner> task_runner);
    ~Server() override;

    bool start();

    std::unique_ptr<proto::SessionList> sessionList() const;
    bool stopSession(Session::SessionId session_id);
    void onHostSessionWithId(SessionHost* session);

    SessionHost* hostSessionById(base::HostId host_id);
    Session* sessionById(Session::SessionId session_id);

protected:
    // base::NetworkServer::Delegate implementation.
    void onNewConnection(std::unique_ptr<base::NetworkChannel> channel) override;

    // SharedKeyPool::Delegate implementation.
    void onPoolKeyUsed(Session::SessionId session_id, uint32_t key_id) override;

    // base::ServerAuthenticatorManager::Delegate implementation.
    void onNewSession(base::ServerAuthenticatorManager::SessionInfo&& session_info) override;

    // Session::Delegate implementation.
    void onSessionFinished(Session::SessionId session_id,
                           proto::RouterSession session_type) override;

private:
    std::shared_ptr<base::TaskRunner> task_runner_;
    std::shared_ptr<DatabaseFactory> database_factory_;
    std::unique_ptr<base::NetworkServer> server_;
    std::unique_ptr<base::ServerAuthenticatorManager> authenticator_manager_;
    std::unique_ptr<SharedKeyPool> relay_key_pool_;
    std::vector<std::unique_ptr<Session>> sessions_;

    std::vector<std::u16string> client_white_list_;
    std::vector<std::u16string> host_white_list_;
    std::vector<std::u16string> admin_white_list_;
    std::vector<std::u16string> relay_white_list_;

    DISALLOW_COPY_AND_ASSIGN(Server);
};

} // namespace router

#endif // ROUTER__ROUTER_SERVER_H
