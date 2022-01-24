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

#ifndef ROUTER__SESSION_HOST_H
#define ROUTER__SESSION_HOST_H

#include "base/peer/host_id.h"
#include "proto/router_peer.pb.h"
#include "router/session.h"

namespace router {

class ServerProxy;

class SessionHost : public Session
{
public:
    SessionHost();
    ~SessionHost() override;

    using HostIdList = std::vector<base::HostId>;

    const HostIdList& hostIdList() const { return host_id_list_; }
    bool hasHostId(base::HostId host_id) const;

    void sendConnectionOffer(const proto::ConnectionOffer& offer);

protected:
    // Session implementation.
    void onSessionReady() override;

    // base::NetworkChannel::Listener implementation.
    void onMessageReceived(const base::ByteArray& buffer) override;
    void onMessageWritten(size_t pending) override;

private:
    void readHostIdRequest(const proto::HostIdRequest& host_id_request);
    void readResetHostId(const proto::ResetHostId& reset_host_id);

    HostIdList host_id_list_;

    DISALLOW_COPY_AND_ASSIGN(SessionHost);
};

} // namespace router

#endif // ROUTER__SESSION_HOST_H
