//============================================================================
    // problem link : https://codeforces.com/problemset/problem/1296/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : math, Rating 800, Ansi-style
    // status       : accepted
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>> n;
        int a[n];

        int cnt=0,sum=0;
        for(int i=0; i<n; ++i){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0) cnt++;
        }

        if(sum%2!=0) cout<<"YES\n";
        else{
            if(cnt<n && cnt!=0) cout<<"YES\n";
            else cout<<"NO\n";



        }

    }
    return 0;
}
