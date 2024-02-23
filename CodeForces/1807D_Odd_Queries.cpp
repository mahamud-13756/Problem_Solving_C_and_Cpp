//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/problemset/problem/1857/C
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//==================================================================================|


#include<bits/stdc++.h>
using namespace std;


#define ll                  long long int
#define ull                 unsigned long long

#define py cout<<"YES\n";
#define pn cout<<"NO\n";


/*----Start Needed Function-----------------------------------------------*/

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
//-------------------------------------------------

// Function to calculate the number of pairs (C(n, r))
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
//------------------------------------------------------------




/*----Ended Needed Function-----------------------------------------------*/










//----Used Function in this Program---------------------------------

void solve()
{

}

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,q; cin>>n>>q;
        ll sum=0;
        int a[n+1]; for(int i=1; i<n+1; ++i) cin>>a[i];
        vector<ll>vc(n+1,0);
        for(int i=1; i<=n; ++i)
        {
            vc[i]=vc[i-1]+a[i];
        }

        for(int i=0; i<q; ++i)
        {
            ll l,r,k; cin>>l>>r>>k;

            sum=vc[n];
            sum-=(vc[r]-vc[l-1]);
            sum+=(r-l+1LL)*k;

            if(sum%2ll==0LL) pn
            else py

            //cout<<ans<<endl;
        }





    }
    return 0;
}
