//https://codeforces.com/contest/1927/problem/A
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
        int n,st,st1;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0; i<n; ++i)
        {
            if(s[i]=='B'){
              st=i;
            break;
            }
        }
        reverse(s.begin(), s.end());

        for(int i=0; i<n; ++i)
        {
            if(s[i]=='B'){
               st1=i;
               break;
            }
        }
        cout<<n-(st+st1)<<"\n";


    }


    return 0;
}
