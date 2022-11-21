// https://codeforces.com/problemset/problem/266/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string s,a;
    cin>>s;
    char q;


    for(int j=0;j<t; j++){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='B' && s[i+1]=='G'){
            q=s[i];
            s[i]=s[i+1];
            s[i+1]=q;
            i++;
        }
    }
    }
    cout<<s;


    return 0;
}
