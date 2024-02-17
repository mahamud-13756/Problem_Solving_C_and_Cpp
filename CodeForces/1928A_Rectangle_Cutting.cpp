//https://codeforces.com/problemset/problem/1928/A
//
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll a,b; cin>>a>>b;

        ll c=min(a,b);
        ll d=max(a,b);
        if(c%2==0) cout<<"YES\n";
        else {
            if(d%2==0 && d/2!=c) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
