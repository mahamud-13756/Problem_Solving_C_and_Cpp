//============================================================================
    // problem link : https://codeforces.com/contest/1932/problem/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : implementation, Brute Force. Rating 900, Ansi-style
    // status       : accepted
    //============================================================================

#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"


/////////////////////////////////////////////////////////////////



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int cnt=0;

        for(int i=0; i<n; ++i)
        {
            if(s[i]=='*' && s[i+1]=='*'){
                break;
            }
            else{
                if(s[i]=='@') cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
