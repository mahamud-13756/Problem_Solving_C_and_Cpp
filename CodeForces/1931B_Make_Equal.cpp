//https://codeforces.com/contest/1931/problem/B
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


void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    if(n==1){
        cout<<"YES\n";
        return;
    }
    long long sum=0;

    for(auto i:v) sum+=i;
    int req=sum/n;

    long long excess=0;

    for(int i=0; i<n; ++i){
        if(v[i]>=req) excess+=(v[i]-req);
        else{
            int req_am=req-v[i];
            if(excess>=req_am) excess-=req_am;
            else{
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
