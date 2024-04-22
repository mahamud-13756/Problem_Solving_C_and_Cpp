//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1954/A
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
        int n,m,k; cin>>n>>m>>k;
        if(m==1) cout<<"NO\n";
        else if( (n-((n+(m-1))/m)) > k ) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
