//https://codeforces.com/contest/1829/problem/D
//submitted 1000
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////

void rec(int,int);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0,twice,d,quotient;
        cin>>n>>m;

        if(n<m){cout<<"NO\n";break;}
        if(n==m){cout<<"YES\n";break;}

        if(n%3==0){
            rec(n,m);
        }
        else cout<<"NO\n";




    }
    return 0;
}

void rec(int n, int m)
{                          // 9
    int quotient = n/3;    // 3
    ll twice = quotient*2;// 6

    //ll lt=twice/3;
    if(quotient%3==0){
        if(m==quotient || m==twice) cout<<"YES";
        else rec(quotient,m);

    }
    else {
        if(m==quotient || m==twice) cout<<"YES";
        else rec(twice,m);
    }
//    if(twice%3==0){
//        if(m==lt || m==lt*2) cout<<"YES";
//        else rec(quotient);
//    }
//    else {
//        if(m==lt || m==lt*2) cout<<"YES";
//    }

    cout<<"NO\n";
}
