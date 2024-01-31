//https://codeforces.com/problemset/problem/1915/A
//submitted 800
//
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
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b) cout<< c<<"\n";
        else if(a==c) cout<<b <<"\n";
        else cout<< a<<"\n";

    }


    return 0;
}

