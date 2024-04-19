//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/577/A
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
    int n, x; cin>>n>>x;

    int cnt=0;

    for(int i=1; i<=n; ++i){
        if(x%i==0 && (x/i)<=n) cnt++;
    }

    cout<<cnt<<endl;

}
