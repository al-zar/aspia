//
// Aspia Project
// Copyright (C) 2016-2023 Dmitry Chapyshev <dmitry@aspia.ru>
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

#include "client/ui/application.h"

#include "build/version.h"
#include "qt_base/qt_logging.h"

#include <QIcon>

namespace client {

//--------------------------------------------------------------------------------------------------
Application::Application(int& argc, char* argv[])
    : qt_base::Application(argc, argv)
{
    LOG(LS_INFO) << "Ctor";

    setOrganizationName("Aspia");
    setApplicationName("Client");
    setApplicationVersion(ASPIA_VERSION_STRING);
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    setAttribute(Qt::AA_DisableWindowContextHelpButton, true);
#endif
    setWindowIcon(QIcon(":/img/main.ico"));

    if (!hasLocale(settings_.locale()))
    {
        LOG(LS_INFO) << "Set default locale";
        settings_.setLocale(QString::fromStdU16String(DEFAULT_LOCALE));
    }

    setLocale(settings_.locale());
}

//--------------------------------------------------------------------------------------------------
Application::~Application()
{
    LOG(LS_INFO) << "Dtor";
}

//--------------------------------------------------------------------------------------------------
// static
Application* Application::instance()
{
    return static_cast<Application*>(QApplication::instance());
}

} // namespace client
