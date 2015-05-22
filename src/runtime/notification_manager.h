/*
 * Copyright (c) 2015 Samsung Electronics Co., Ltd All Rights Reserved
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


#ifndef WRT_RUNTIME_NOTIFICATION_MANAGER_H_
#define WRT_RUNTIME_NOTIFICATION_MANAGER_H_

#include <string>
#include <map>

namespace wrt {
class NotificationManager {
 public:
  static NotificationManager* GetInstance();
  bool Show(uint64_t tag,
            const std::string& title,
            const std::string& body,
            const std::string& icon_path);
  bool Hide(uint64_t tag);
 private:
  NotificationManager();
  std::map<uint64_t, int> keymapper_;
};
}  // namespace wrt

#endif   // WRT_RUNTIME_NOTIFICATION_MANAGER_H_