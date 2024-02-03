#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {1, 2, 3, 4, 5};

    if (!mySet.empty()) {
        int lastValue = *--mySet.end();
        std::cout << "Last value in the set: " << lastValue << std::endl;
    } else {
        std::cout << "Set is empty." << std::endl;
    }

    return 0;
}