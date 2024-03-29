#include <gtest/gtest.h>
#include "../src/solution.h"

#include <vector>


using CollT = std::vector<int>;

TEST(TestTopic, bin_search_test_1) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {7};
    int actual_result {0};
    
    if (auto res {Solution::bin_search<CollT>(
            nums.cbegin(), nums.cend(),expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_2) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {1};
    int actual_result {0};
    
    if (auto res {Solution::bin_search<CollT>(
            nums.cbegin(), nums.cend(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_3) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {9};
    int actual_result {0};
    
    if (auto res {Solution::bin_search<CollT>(
            nums.cbegin(), nums.cend(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_4) {
    CollT nums {1, };

    int expected_result {1};
    int actual_result {0};
    
    if (auto res {Solution::bin_search<CollT>(
            nums.cbegin(), nums.cend(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_5) {
    CollT nums {1, };

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cbegin(), nums.cend(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_6) {
    CollT nums;

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cbegin(), nums.cend(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_7) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cend(), nums.cend(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_8) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cbegin(), nums.cbegin(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_9) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cbegin(), nums.cend(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_10) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search<CollT>(
        nums.cend(), nums.cbegin(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_11) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {7};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums, expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_12) {
    CollT nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums, search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_13) {
    CollT nums;

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums, search_value)};

    EXPECT_EQ(actual_result, expected_result);
}
