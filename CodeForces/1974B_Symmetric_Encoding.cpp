//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
// problem link : https://codeforces.com/problemset/problem/1974/B
// Name         : .cpp
// Author       : Md. Mahamud Mredha
// Version      :
// Copyright    : use it under your responsibility
// Description  : Rating 900, Ansi-style
// status       : accepted
//=======================================================================================================|
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        string s; cin >> s;

        set<char> st;

        for (int i = 0; i < n; ++i) st.insert(s[i]);

        map<char, char> mp;
        auto rit = st.rbegin();
        for (auto it = st.begin(); it != st.end(); ++it)
        {
            mp[*it] = *rit;
            ++rit;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << mp[s[i]];
        }
        cout << endl;
    }
    return 0;
}
