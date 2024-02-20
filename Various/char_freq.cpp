#include <bits/stdc++.h>
using namespace std;
int main() {
    std::string s = "aAaaBACacbEB";

    // Map to store character frequencies
    map<char, int> charFrequency;

    // Count the frequency of each character
    for (char ch : s) {
        charFrequency[ch]++;
    }

    // Display the frequency of each character
    for (const auto& pair : charFrequency) {
        if (std::isalpha(pair.first)) {  // Check if the character is an alphabet
            std::cout << pair.first << "=" << pair.second << ", ";
        }
    }

    return 0;
}
