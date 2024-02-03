#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 7};

    // Display the original vector
    std::cout << "Original Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector in descending order
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // Display the vector after sorting
    std::cout << "Vector in Descending Order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
