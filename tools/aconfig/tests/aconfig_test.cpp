/*
 * Copyright (C) 2023 The Android Open Source Project
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

#include "com_android_aconfig_test.h"
#include "gtest/gtest.h"

TEST(AconfigTest, TestDisabledReadOnlyFlag) {
  ASSERT_FALSE(com_android_aconfig_test_disabled_ro());
}

TEST(AconfigTest, TestEnabledReadOnlyFlag) {
  // TODO: change to assertTrue(enabledRo()) when the build supports reading tests/*.values
  // (currently all flags are assigned the default READ_ONLY + DISABLED)
  ASSERT_FALSE(com_android_aconfig_test_enabled_ro());
}

TEST(AconfigTest, TestDisabledReadWriteFlag) {
  ASSERT_FALSE(com_android_aconfig_test_disabled_rw());
}

TEST(AconfigTest, TestEnabledReadWriteFlag) {
  // TODO: change to assertTrue(enabledRo()) when the build supports reading tests/*.values
  // (currently all flags are assigned the default READ_ONLY + DISABLED)
  ASSERT_FALSE(com_android_aconfig_test_enabled_rw());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
