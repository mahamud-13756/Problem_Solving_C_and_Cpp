#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<char> vc = {'A', 'B', 'B', 'A', 'A', 'A', 'A', 'B', 'B'};

    // Assuming the vector has at least 3 characters
    std::string smallestLexicographic(vc.begin(), vc.begin() + 3);

    for (int i = 1; i <= vc.size() - 3; ++i) {
        std::string currentSubstring(vc.begin() + i, vc.begin() + i + 3);

        // Compare lexicographically
        if (currentSubstring < smallestLexicographic) {
            smallestLexicographic = currentSubstring;
        }
    }

    std::cout << "The lexicographically smallest string of three characters is: " << smallestLexicographic << std::endl;

    return 0;
}
