// Program to sort an array using the sort algorithm from the STL

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 7};

    std::sort(vec.begin(), vec.end());

    std::cout << "Sorted array: ";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
