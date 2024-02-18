//============================================================================
    // problem link : https://codeforces.com/problemset/problem/122/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 1000, Ansi-style
    // status       : accepted
//============================================================================



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int cnt=0;
    int a[13]={4,7,44,47,77,444,477,747,774,447,474,744,777};

    for(int i=0; i<13; ++i)
    {
        if(n==a[i] || n%a[i]==0){cnt++; break;}
    }
    if(cnt>0) cout<<"YES\n";
    else  cout<<"NO\n";



//    if(n%4==0 || n%7==0) cout<<"YES\n";
//    else{
//        string s=to_string(n);
//        for(int i=0; i<s.size(); ++i)
//        {
//            if(s[i]=='4' || s[i]=='7')  cnt++;
//        }
//        if(cnt==s.size()) cout<<"YES\n";
//        else  cout<<"NO\n";
//    }
}
