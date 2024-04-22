//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1955/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,a,b; cin>>n>>a>>b;

        if((n&1)==0){
            if(2*a>=b) cout<<(n/2)*b<<endl;
            else cout<<n*a<<endl;
        }
        else{
            if(2*a>=b) cout<<((n/2)*b)+a<<endl;
            else cout<<n*a<<endl;
        }

    }
    return 0;
}
