//https://codeforces.com/contest/1929/problem/A
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
        ll n; cin>>n;
        vector<ll> vc;
        ll sum=0,sum1=0;
        for(int i=0; i<n; ++i)
        {
            int a;
            cin>>a;
            vc.push_back(a);
        }
        sort(vc.begin(), vc.end());

        for(int i=0; i<vc.size()-1; ++i)
        {
            sum=vc[i+1]-vc[i];
            sum1+=sum;
        }
        cout<<sum1<<endl;


    }
    return 0;
}
