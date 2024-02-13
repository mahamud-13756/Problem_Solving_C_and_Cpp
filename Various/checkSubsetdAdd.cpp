#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void addSubsets(ll n, ll k, ll x, int index, vector<ll>& subSets, int& cnt) {
    ll ad = 0;
    if (subSets.size() == k) {
        for (auto it : subSets) {
            ad += it;
        }
        if (ad == x) cnt++;
        return;
    }

    for (int i = index; i <= n; ++i) {
        subSets.push_back(i);
        addSubsets(n, k, x, i + 1, subSets, cnt);
        subSets.pop_back();  // Remove the last element to backtrack
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> subSets;
        int cnt = 0; // Initialize the count
        addSubsets(n, k, x, 1, subSets, cnt);
        if (cnt > 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
