//https://codeforces.com/problemset/problem/1915/C
//submitted
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////

bool isPerfectSquare(ll num) {
    ll root = std::sqrt(num);
    return root * root == num;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,add=0;
        cin>>n;

        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            add=add+a[i];
        }

        if(isPerfectSquare(add)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        add=0;
    }


    return 0;
}

