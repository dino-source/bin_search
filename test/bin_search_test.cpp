#include <gtest/gtest.h>
#include "../src/solution.h"

#include <vector>


TEST(TestTopic, bin_search_test_1) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {7};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums.begin(), nums.end(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_2) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {1};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums.begin(), nums.end(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_3) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {9};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums.begin(), nums.end(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_4) {
    std::vector<int> nums {1, };

    int expected_result {1};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums.begin(), nums.end(), expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_5) {
    std::vector<int> nums {1, };

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.begin(), nums.end(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_6) {
    std::vector<int> nums;

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.begin(), nums.end(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_7) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.end(), nums.end(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_8) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.begin(), nums.begin(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_9) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.begin(), nums.end(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_10) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums.end(), nums.begin(), search_value)};

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_11) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int expected_result {7};
    int actual_result {0};
    
    if (auto res {Solution::bin_search(nums, expected_result)};
        res.has_value()) {
        actual_result = *(res.value());
    }

    EXPECT_EQ(actual_result, expected_result);
}

TEST(TestTopic, bin_search_test_12) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int search_value {11};
    auto expected_result {std::nullopt};
    auto actual_result {Solution::bin_search(nums, search_value)};

    EXPECT_EQ(actual_result, expected_result);
}
