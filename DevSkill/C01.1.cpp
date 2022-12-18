#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "IESLDFKFFD" << endl;

    int N = 1000000;

    // O(N)
    for(int i=0; i<N; i+=2) {
        cout << i << endl;
    }

    // O(logN)
    for(int i=1; i<N; i*=2) {
        cout << i << endl;
    }
    for(int i=1; i<N; i+=i) {
        cout << i << endl;
    }

    // O(sqrt(N))
    for(int i=1; i*i<N; i++) {
        cout << i << endl;
    }

    // O(logN)
    for(int i=1; i*i<N; i*=2) {
        cout << i << endl;
    }
}
