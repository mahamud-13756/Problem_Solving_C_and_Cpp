//https://codeforces.com/problemset/problem/337/A
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main() {
    int n, m;
    vector<int> vc;
    cin >> n >> m;
    int a[m + 1];  // Increase the size of the array
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
        vc.push_back(a[i]);
    }
    sort(vc.begin(), vc.end());
    int mini = INT_MAX;
    int i = 0, j = n - 1;
    int t = m - n + 1;
    while (t--) {
        int st = vc[j] - vc[i];
        mini = min(mini, st);
        ++i;
        ++j;
    }
    cout << mini << "\n";
    return 0;
}
