//https://codeforces.com/contest/1931/problem/A
//
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
        int st=n-26;
        int st1,st2,st3,se1,se2,se3;
        if(n<=28){
            se1=n-2;
            char c1=se1+96;
            cout<<"aa"<<c1<<"\n";
            continue;
        }
        else{
            st1=n-26;
            if(st1<=27){
                st2=st1-1;
                char c2=st2+96;
                cout<<"a"<<c2<<"z"<<"\n";
            }
            else{
                st3=st1-26;
                char c3=st3+96;
                cout<<c3<<"z"<<"z"<<"\n";
            }
        }

    }
    return 0;
}
