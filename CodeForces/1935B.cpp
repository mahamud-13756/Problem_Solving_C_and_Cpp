#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int mex = 0;
    vector<bool> used(n, false);

    // Find the first unused element as Mex
    for (int i = 0; i < n; ++i) {
        if (a[i] == mex) {
            ++mex;
            while (mex < n && used[mex]) {
                ++mex;
            }
        }
    }

    if (mex == n) {
        cout << "-1\n";
        return;
    }

    vector<pair<int, int>> divisions;
    divisions.push_back({1, n});

    cout << divisions.size() << "\n";
    for (auto& div : divisions) {
        cout << div.first << " " << div.second << "\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

