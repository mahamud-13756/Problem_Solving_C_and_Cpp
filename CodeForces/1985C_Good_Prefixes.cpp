//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1985/C
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
        long long n; cin>>n;
        long long a[n];
        for(int i=0; i<n; ++i) cin>>a[i];

        long long sum=0, cnt=0, mx=-1;

        for(int i=0; i<n; ++i)
        {
            sum+=a[i];
            mx = max(mx, a[i]);
            if( (sum-mx) == mx ) cnt++;
        }

        cout<<cnt<<endl;
    }
}
