#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // Number of key-value pairs
    std::map<int, int> mp;

    std::cout << "Enter the number of key-value pairs: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int key, value;

        // Taking input for key
        std::cout << "Enter key " <<": ";
        std::cin >> key;

        // Taking input for value
        std::cout << "Enter value for key " << key << ": ";
        std::cin >> value;

        // Inserting into the map
        mp[key] = value;
    }

    // Displaying the map
    std::cout << "The map contains:\n";
	map<int, int>::iterator it = mp.begin();
    while(it!=mp.end()){
			std::cout<<it->first<<" "<<it->second<<endl;
		}

    return 0;
}