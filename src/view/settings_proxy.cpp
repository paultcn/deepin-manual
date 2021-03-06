/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtGui/QDesktopServices>
#include <QUrl>
#include <QDebug>

#include "settings_proxy.h"

namespace dman
{

SettingsProxy::SettingsProxy(QObject *parent) : QObject(parent)
{
    this->setObjectName("SettingsProxy");
}

void SettingsProxy::openUrl(const QString &url)
{
    QDesktopServices::openUrl(QUrl(url));
}


void SettingsProxy::raiseWindow()
{
    emit this->raiseWindowRequested();
}


}  // namespace dstore
