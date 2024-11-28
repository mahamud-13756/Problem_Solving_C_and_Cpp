//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1977/A
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
        int n,m; cin>>n>>m;

        if(n>=m)
        {
            if( (n%2==0 and m%2==0) || (n%2==1 and m%2==1) ) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }

    return 0;
}
