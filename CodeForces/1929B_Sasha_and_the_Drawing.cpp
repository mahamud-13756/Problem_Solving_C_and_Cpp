//https://codeforces.com/contest/1929/problem/B
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"


/////////////////////////////////////////////////////////////////



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k; cin>>n>>k;

        //ll st=(n+n)-2;
        //ll total;
        ll ans=0;
        if((4*n)-2==k) {
            ans=ceil(k/2.0)+1;
        }
        else{
            //ll a=k-(st*2);
            //total=st+a;
            ans=ceil(k/2.0);
        }
        cout<<ans<<endl;

    }
    return 0;
}
