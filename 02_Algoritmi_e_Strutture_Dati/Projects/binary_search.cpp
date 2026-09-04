#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& values, int target) {
    int left = 0;
    int right = static_cast<int>(values.size()) - 1;

    while (left <= right) {
        const int mid = left + (right - left) / 2;
        if (values[mid] == target) return mid;
        if (values[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    const std::vector<int> values{1, 3, 5, 7, 9, 11, 13};
    const int target = 9;
    std::cout << "Indice: " << binarySearch(values, target) << '\n';
}
