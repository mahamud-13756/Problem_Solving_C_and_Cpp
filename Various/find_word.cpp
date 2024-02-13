#include <bits/stdc++.h>

int countOccurrences(const std::string& bigWord, const std::string& wordToFind) {
    int occurrences = 0;
    size_t pos = bigWord.find(wordToFind);

    while (pos != std::string::npos) {
        occurrences++;
        //bigWord.erase(pos, wordToFind.length());
        pos = bigWord.find(wordToFind, pos + 1);
    }

    return occurrences;
}

int main() {
    std::string bigWord = "This is a big word that contains a specific word.";
    std::string wordToFind = "word";

    int occurrences = countOccurrences(bigWord, wordToFind);

    std::cout << "Number of occurrences: " << occurrences << std::endl;

    return 0;
}
