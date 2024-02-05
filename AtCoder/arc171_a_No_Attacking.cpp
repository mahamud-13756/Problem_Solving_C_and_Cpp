//https://atcoder.jp/contests/arc171/tasks/arc171_a
//
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
        ll n,a,b;
        cin>>n>>a>>b;
        if(n>a){
            if (min((n + 1) / 2, n - a) * (n - a) >= b) cout << "Yes\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }


    return 0;
}

