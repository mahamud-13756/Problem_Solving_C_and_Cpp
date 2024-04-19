//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/459/B
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
    long long n; cin>>n;
    int a[n];
    long long mn=1e9+5, mx=0;
    long long cntmn=0, cntmx=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];

        if(a[i]<mn) mn=a[i];
        if(a[i]>mx) mx=a[i];
    }

    for(int i=0; i<n; ++i)
    {
        if(a[i]==mn) cntmn++;
        if(a[i]==mx) cntmx++;
    }

    cout<<abs(mx-mn)<<" ";
    if(mn - mx==0) cout<<((n*(n-1))/2)<<endl;
    else cout<<cntmn*cntmx<<endl;


    return 0;
}
