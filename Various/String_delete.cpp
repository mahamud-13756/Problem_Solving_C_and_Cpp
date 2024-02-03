#include <iostream>
#include <string>

int main() {
    std::string input = "WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";

    // Replace "WUB" with spaces
    size_t pos = input.find("WUB");
    while (pos != std::string::npos) {
        input.replace(pos, 3, " ");
        pos = input.find("WUB", pos + 1);
    }

    // Remove leading and trailing spaces
    size_t start = input.find_first_not_of(" ");
    size_t end = input.find_last_not_of(" ");
    std::string result = input.substr(start, end - start + 1);

    std::cout << result << std::endl;

    return 0;
}
