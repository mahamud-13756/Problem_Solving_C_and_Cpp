//https://www.codechef.com/problems/GCDPERM
//submitted
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,st;
        cin>>n>>k;

        ll a[n];
        for (ll i=0; i<n; i++)//i=0,1,2,3,4,5
        {
            a[i]= i+1;        //a[i]=1,2,3,4,5,6
        }

        st=n/k;

        for(ll i=1; i<=k; i++)
        {
            cout<<st*i<<" ";

        }
        cout<<"\n";


    }


    return 0;
}
