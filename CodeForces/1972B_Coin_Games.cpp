//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1972/problem/A
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
        string s; cin>>s;
        int cnt=0;
        for(int i=0; i<n; ++i)
        {
            if(s[i]=='U') cnt++;
        }

        if(cnt%2==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
