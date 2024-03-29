#ifndef DINO_SOURCE_BIN_SEARCH_H
#define DINO_SOURCE_BIN_SEARCH_H

#include <iterator>
#include <optional>


class Solution {
public:
    template <typename IterT>
    static std::optional<IterT> bin_search(IterT begin, IterT end, int item) {
        std::optional<IterT> result {};

        if (end <= begin) {
            return result;
        }

        auto size {std::distance(begin, end)};

        if (size == 0 || (size == 1 && *begin != item)) {
            return result;
        }
       
        if (auto middle {begin + size / 2}; *middle < item) {
            result = bin_search(std::next(middle), end, item);
        }
        else if (*middle > item) {
            result = bin_search(begin, middle, item);
        }
        else if (*middle == item) {
            result = middle;
        }

        return result;
    }
};

#endif // DINO_SOURCE_BIN_SEARCH_H
