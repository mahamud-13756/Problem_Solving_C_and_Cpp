//========�In the name of ALLAH, The Most Gracious and The Most Merciful�===============================|
    // problem link : https://codeforces.com/problemset/problem/1934/A
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
        int n; cin>> n;
        int a[n];
        for(int i=0; i<n; ++i) cin>>a[i];

        sort(a,a+n);

        int i,j,k,l;
        i=a[0]; j=a[n-1]; k=a[1]; l=a[n-2];

        int ans= abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
        cout<<ans<<endl;

    }

}
