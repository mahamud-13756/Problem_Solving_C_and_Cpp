//============================================================================
    // problem link : https://codeforces.com/contest/1296/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : math, Rating 900, Ansi-style
    // status       : accepted
//============================================================================
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        long int n; cin>>n;

        long int ans=n,div=0;
        if(n<10){
            cout<<n<<endl;
            continue;
        }
        else{
            while(n>=10){
                div=n/10;
                n%=10;
                n+=div;
                ans+=div;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
