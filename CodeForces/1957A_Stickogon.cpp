//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1957/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; ++i) cin>>a[i];

        map<int, int> mp;
        int ans=0,s;
        for (int val : a) {
            mp[val]++;
        }

        for(const auto& pair: mp) {
            //cout << "Key: " << pair.first << ", Value: " << pair.second <<endl;
            int s=pair.second / 3;
            ans+=s;
        }
        cout<<ans<<endl;

    }
    return 0;
}
