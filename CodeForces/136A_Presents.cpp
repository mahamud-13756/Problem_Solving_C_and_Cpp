//

#include <iostream>
using namespace std;
int n, a, z[100];
int main() {
    cin >> n;


    for (int i = 1; i <= n; i++) {
        cin >> a;
        z[a] = i;
    }


    for (int i = 1; i <= n; i++) {
        cout << z[i] << " ";
    }
}
