//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1325/A
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
        int n; cin>>n;
        int a,b;

        if(n&1==0){
            a=n/2;
            b=a;
        }else{
            a=n-1;
            b=1;
        }
        cout<<a<<" "<<b<<endl;
    }

}
