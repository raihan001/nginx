/*
 * Copyright 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Author: jmarantz@google.com (Joshua Marantz)

#include "pagespeed/kernel/util/platform.h"

#include "pagespeed/kernel/base/thread_system.h"
#include "pagespeed/kernel/base/timer.h"

#include "pagespeed/kernel/thread/pthread_thread_system.h"
#include "pagespeed/kernel/base/checking_thread_system.h"

#include "pagespeed/kernel/base/posix_timer.h"

namespace net_instaweb {

ThreadSystem* Platform::CreateThreadSystem() {
  ThreadSystem* impl = new PthreadThreadSystem;
#ifdef NDEBUG
  return impl;
#else
  return new CheckingThreadSystem(impl);
#endif
}

Timer* Platform::CreateTimer() {
  return new PosixTimer;
}

}  // namespace net_instaweb
