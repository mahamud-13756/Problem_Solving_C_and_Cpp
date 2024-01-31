#include <iostream>
#include <map>

int main() {
    std::string myString = "FEADBBDFFEDFFFDHHHADCC";
    std::map<char, int> mp;

    for (int i = 0; i < myString.size(); ++i) {
    char c = myString[i];
    mp[c]++;
    }

    // Display the counts
    for (const auto& entry : mp) {
        std::cout << "Character: " << entry.first << ", Count: " << entry.second << std::endl;
    }

    return 0;
}
