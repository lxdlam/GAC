//2.3节 P25 选择排序

#include <vector>

//默认比较函数
template <typename T>
bool comp(const T &elem1, const T &elem2)
{
    return elem1 < elem2;
}

template <typename T>
void SelectionSort(std::vector<T>::iterator start, std::vector<T>::iterator end, bool (*comp)(const T &elem1, const T &elem2) = comp)
{
}