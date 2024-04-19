//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1342/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ll x,y; cin>>x>>y;
        ll a,b; cin>>a>>b;

        //if(abs(x)-abs(y)==0) {cout<<(abs(a)+abs(b))*a<<endl; break;}

        if(x==0 && y==0) cout<<"0"<<endl;
        else if(x>0 && y>0){
            ll dif = abs(abs(x)-abs(y));
            ll val = dif*a;
            if(2*a<b) cout<<((min(x,y)*2)*a)+val<<endl;
            else cout<<((min(x,y))*b)+val<<endl;

        }
        else if(x<0 && y<0){
            ll dif = abs(abs(x)-abs(y));
            ll val = dif*a;
            if(2*a<b) cout<<abs(((min(x,y)*2)*a)+val)<<endl;
            else cout<<abs(((min(x,y))*b)+val)<<endl;

        }
        else{
            cout<<(abs(x)+abs(y))*a<<endl;
        }

    }
    return 0;
}
