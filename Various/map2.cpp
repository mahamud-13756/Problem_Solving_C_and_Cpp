#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  // Number of key-value pairs
    map<int, int> mp;

    cout << "Enter the number of key-value pairs: ";
   cin >> n;

    for (int i = 0; i < n; ++i) {
        int key, value;

        // Taking input for key
        cout << "Enter key " <<": ";
        cin >> key;

        // Taking input for value
        cout << "Enter value for key " << key << ": ";
        cin >> value;

        // Inserting into the map
        mp[key] = value;
    }

    // Displaying the map
    cout << "The map contains:\n";
	map<int, int>::iterator it = mp.begin();
    while(it!=mp.end()){
			cout<<it->first<<" "<<it->second<<endl;
			it++;
		}

    return 0;
}
