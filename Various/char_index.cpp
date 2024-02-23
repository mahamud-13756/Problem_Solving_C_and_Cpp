#include <bits/stdc++.h>

int main() {
    std::string input = "hello";

    // Map to store the first occurrence index of each character
    std::unordered_map<char, int> charIndex;

    for (int i = 0; i < input.size(); ++i) {
        char currentChar = input[i];

        // Check if the character is already in the map
        if (charIndex.find(currentChar) == charIndex.end()) {
            // If not, store its index in the map
            charIndex[currentChar] = i;
        }
    }

    // Display the content of the map
    for (const auto& pair : charIndex) {
        std::cout << "Character: " << pair.first << ", Index: " << pair.second << std::endl;
    }

    return 0;
}