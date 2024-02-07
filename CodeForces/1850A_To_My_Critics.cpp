//https://codeforces.com/contest/1850/problem/A
//submitted 800
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll a,b,c,s;
       cin>>a>>b>>c;

       if(a+b>=10 || a+c>=10 || b+c>=10) cout<<"Yes\n";
       else cout<<"NO\n";

    }


    return 0;
}
