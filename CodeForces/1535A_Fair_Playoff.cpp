//https://codeforces.com/problemset/problem/1535/A
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long



/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;

        if(s1>s3 && s1>s4 && s2>s3 && s2>s4) cout<<"NO\n";
        else if(s1<s3 && s1<s4 && s2<s3 && s2<s4) cout<<"NO\n";
        else cout<<"YES\n";


    }


    return 0;
}
