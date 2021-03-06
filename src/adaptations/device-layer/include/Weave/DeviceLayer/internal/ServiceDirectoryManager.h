/*
 *
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef SERVICE_DIRECTORY_MANAGER_H
#define SERVICE_DIRECTORY_MANAGER_H

#include <Weave/DeviceLayer/internal/WeaveDeviceLayerInternal.h>
#include <Weave/Profiles/service-directory/ServiceDirectory.h>

namespace nl {
namespace Weave {
namespace DeviceLayer {
namespace Internal {

#if WEAVE_CONFIG_ENABLE_SERVICE_DIRECTORY

extern ::nl::Weave::Profiles::ServiceDirectory::WeaveServiceManager ServiceDirectoryMgr;

extern WEAVE_ERROR InitServiceDirectoryManager(void);

#endif // WEAVE_CONFIG_ENABLE_SERVICE_DIRECTORY

} // namespace Internal
} // namespace DeviceLayer
} // namespace Weave
} // namespace nl

#endif // SERVICE_DIRECTORY_MANAGER_H
