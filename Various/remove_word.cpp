#include <iostream>
#include <string>

int main() {
    std::string bigWord = "WUBWUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";

    // Word to be removed
    std::string wordToRemove = "WUB";

    size_t pos = bigWord.find(wordToRemove);

    // If the word is found, replace all occurrences with an empty string
    while (pos != std::string::npos) {
        bigWord.replace(pos, wordToRemove.length(), " ");
        pos = bigWord.find(wordToRemove);
    }

    std::cout << "After removing the word:" << bigWord<< std::endl;
}