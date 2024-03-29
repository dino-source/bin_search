#ifndef DINO_SOURCE_BIN_SEARCH_H
#define DINO_SOURCE_BIN_SEARCH_H

#include <iterator>
#include <optional>


class Solution {
public:
    template <typename CollT, typename IterT = CollT::const_iterator,
        typename RetT = std::optional<IterT>>
    static RetT bin_search(IterT begin, IterT end, CollT::value_type item) {
        RetT result {};

        if (end <= begin) {
            return result;
        }

        auto size {std::distance(begin, end)};

        if (size == 0 || (size == 1 && *begin != item)) {
            return result;
        }
       
        if (auto middle {begin + size / 2}; *middle < item) {
            result = bin_search<CollT>(std::next(middle), end, item);
        }
        else if (*middle > item) {
            result = bin_search<CollT>(begin, middle, item);
        }
        else if (*middle == item) {
            result = middle;
        }

        return result;
    }

    template <typename CollT, typename RetT =
        std::optional<typename CollT::const_iterator>>
    static RetT bin_search(CollT const &collection, CollT::value_type item) {
        return bin_search<CollT>(collection.cbegin(), collection.cend(), item);
    }
};

#endif // DINO_SOURCE_BIN_SEARCH_H
