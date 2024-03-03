//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
// problem link : https://codeforces.com/problemset/problem/1913/B
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

    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; ++i)
    {
        cin>>s;
        int cnt0,cnt1;
        cnt0=0;cnt1=0;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }




        cout<<cnt0+cnt1<<endl;

    }
    return 0;
}
