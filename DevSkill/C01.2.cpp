#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    vector<int> A;
    cin >> N;
    A.resize(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += A[i];
    }
    cout << sum << endl;

    int N2, sum2 = 0, v = 0;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> v;
        sum2 += v;
    }
    cout << sum2 << endl;
}
