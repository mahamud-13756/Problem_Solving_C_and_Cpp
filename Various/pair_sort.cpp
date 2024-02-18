#include <iostream>
#include <algorithm>

int main() {
    // Create an array of pairs
    std::pair<int, char> pairs[] = {{3, 'C'}, {1, 'A'}, {2, 'B'}};

    // Calculate the size of the array
    size_t size = sizeof(pairs) / sizeof(pairs[0]);

    // Sort the array based on the first value of each pair
    std::sort(pairs, pairs + size);

    // Print the sorted array
    for (size_t i = 0; i < size; ++i) {
        std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
    }

    return 0;
}
