//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1574/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 1100, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int a,b,c,m; cin>>a>>b>>c>>m;
        int maxpr, minpr;
        maxpr=a+b+c-3;
        int maxval=max( max(a,b) , c);
        minpr = maxval-a-b-c+maxval-1;

        if(m>=minpr && m<=maxpr) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
