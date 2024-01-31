//https://codeforces.com/contest/1925/problem/A
//submitted
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz";
    string s1=s.substr(0,k);
    while(n--)
    {
        cout<<s1;

    }
    cout<<"\n";
    }
    return 0;
}

