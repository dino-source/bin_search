#include <gtest/gtest.h>
#include "../src/solution.h"


TEST(TestTopic, bin_search_test_1) {
    CollectionType nums {23, 12, 56, 22, 78, 45, 67, 14, 90, 49, 35};

    Solution sol;
    ItemType expected_result {78};
    auto actual_result {sol.bin_search(nums, expected_result)};

    EXPECT_EQ(actual_result, expected_result);
}
