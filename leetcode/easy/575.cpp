template <typename ForwardIterator,
          typename BaseIteratorType = typename std::iterator_traits<ForwardIterator>::value_type>
[[nodiscard]] std::set<BaseIteratorType> to_set(ForwardIterator first, ForwardIterator last) {
    std::set<BaseIteratorType> set_obj(first, last);
    return set_obj;
}

template <typename T_container, typename ContainerValueType = typename T_container::value_type>
[[nodiscard]] std::set<ContainerValueType> to_set(const T_container& container) {
#if CPL
    CPL_IS_CONTAINER(T_container);
#endif  // CPL
    return to_set(container.begin(), container.end());
}

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        auto unique = to_set(candyType);

        return unique.size() > candyType.size() / 2 ? candyType.size() / 2 : unique.size();
    }
};
