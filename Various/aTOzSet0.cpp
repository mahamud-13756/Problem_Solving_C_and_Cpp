#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<char, int>> charCount;

    for (char ch = 'a'; ch <= 'z'; ++ch) {
        charCount.emplace_back(ch, 0);
    }
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        charCount.emplace_back(ch, 0);
    }

    // Accessing the pairs
    for (const auto& p : charCount) {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    return 0;
}
