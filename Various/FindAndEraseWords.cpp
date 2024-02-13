#include <bits/stdc++.h>
using namespace std;

int countOccurrences(std::string& bigWord, const std::string& wordToFind) {
    int occurrences = 0;
    size_t pos = bigWord.find(wordToFind);

    while (pos != std::string::npos) {
        occurrences++;
        bigWord.erase(pos, wordToFind.length());
        pos = bigWord.find(wordToFind, pos + 1);
    }
    cout<<"\n"<<bigWord<<"\n";

    return occurrences;
}

int main() {
    std::string bigWord; cin>>bigWord; //= "This is a big word that contains a specific word.";
    std::string wordToFind = "WUB";

    // Make a copy of bigWord to avoid modifying the original string
    std::string copyBigWord = bigWord;

    int occurrences = countOccurrences(copyBigWord, wordToFind);

    std::cout << "Number of occurrences: " << occurrences << std::endl;

    return 0;
}
