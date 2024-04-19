#include <iostream>
#include <string>

int countOccurrences(const std::string& str, const std::string& word1, const std::string& word2) {
    int count1 = 0;
    int count2 = 0;
    size_t pos = 0;

    while ((pos = str.find(word1, pos)) != std::string::npos) {
        ++count1;
        pos += word1.length();
    }

    pos = 0;  // Resetting position for the second word

    while ((pos = str.find(word2, pos)) != std::string::npos) {
        ++count2;
        pos += word2.length();
    }

    return count1 + count2;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string word1 = "map";
    std::string word2 = "pie";

    int occurrences = countOccurrences(inputString, word1, word2);

    std::cout << "The words '" << word1 << "' and '" << word2 << "' together occur " << occurrences << " times in the string." << std::endl;

    return 0;
}
