//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1931/D
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll n,x,y; cin>>n>>x>>y;
        ll a[n]; for(int i=0; i<n; ++i) cin>>a[i];
        //ll cnt=0,sum,sub;
         map<ll,map<ll,ll>>mp;
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=mp[(x-a[i]%x)%x][a[i]%y];
            mp[a[i]%x][a[i]%y]++;
        }
        cout<<ans<<"\n";



    }
    return 0;
}
