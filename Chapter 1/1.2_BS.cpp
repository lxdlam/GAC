//1.2节 P2 二分查找

#include <vector>

template <typename T>
int BinarySearch(const std::vector<T> &v, const T &target)
{
    int left = 0, right = v.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}