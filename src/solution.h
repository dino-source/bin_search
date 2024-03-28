#ifndef DINO_SOURCE_BIN_SEARCH_H
#define DINO_SOURCE_BIN_SEARCH_H

#include <vector>
#include <optional>


using CollectionType = std::vector<int>;
using ItemType = int;
using ResultType = std::optional<ItemType>;

class Solution {
public:
    ResultType bin_search(CollectionType &nums, ItemType item);
};

#endif // DINO_SOURCE_BIN_SEARCH_H
