#ifndef ALGORITHMS_LINEAR_SEARCH_H
#define ALGORITHMS_LINEAR_SEARCH_H
#include <vector>

template <typename T>
int linear_search(const std::vector<T>& array, const T& target)
{
    std::size_t size = array.size();
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == target)
            return i;
    }
    return -1;
}
#endif //ALGORITHMS_LINEAR_SEARCH_H