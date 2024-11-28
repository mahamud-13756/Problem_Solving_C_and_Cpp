//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1975/problem/B
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
        vector<int>vc;

        for(int i=0; i<n; ++i) cin>>a[i];

        sort(a, a+n);

        for(int i=0; i<n; ++i)
        {
            if(a[i]%a[0]==0) {}
            else vc.push_back(a[i]);
        }
        int beautiful=1;
        for(int i=0; i<vc.size(); ++i)
        {
            if(vc[i]%vc[0]==0) {}
            else beautiful=0;
        }

        if(beautiful) cout<<"YES\n";
        else cout<<"NO\n";

    }
}
