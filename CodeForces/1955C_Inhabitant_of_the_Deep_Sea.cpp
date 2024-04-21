//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1955/C
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
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n, k; cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; ++i) cin>>a[i];

        ll i=0, j=n-1, cnt=0;
        while(k && i <= j){
            if(k<=0) break;
            --a[i];--k;
            if(a[i]==0){
                i++;
                cnt++;
            }
            if(k<=0) break;
            --a[j]; --k;
            if(a[j]==0){
                j--;
                cnt++;
            }

            if(cnt==n) break;

        }

        cout<<cnt<<endl;

    }
    return 0;
}
