//https://codeforces.com/contest/1829/problem/A
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        string s,c="codeforces";
        cin>>s;
        for(int i=0; i<10; i++)
        {
            if(s[i]!=c[i]) cnt++;
        }
        cout<<cnt<<"\n";

    }


    return 0;
}
