#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findRepeatedElements(const std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    std::vector<int> repeatedElements;

    for (int num : nums) {
        countMap[num]++;
    }

    // Find repeated elements
    for (const auto& pair : countMap) {
        if (pair.second > 1) {
            repeatedElements.push_back(pair.first);
        }
    }

    return repeatedElements;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 2, 4, 5, 6, 4, 7, 8, 9, 9};
    std::vector<int> repeated = findRepeatedElements(nums);

    std::cout << "Repeated Elements: ";
    for (int num : repeated) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
