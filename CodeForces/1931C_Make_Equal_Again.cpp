//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1931/C
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 1000, Ansi-style
    // status       : accepted
//=======================================================================================================|

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int p=n;
        int a[n],b[n];
        for(int i=0; i<n; ++i) cin>>a[i];

        for(int i=0;n>0; ++i){
            b[i]=a[n-1];
            n--;
            //cout<<b[i]<<" ";
        }
        int cnta=1,cntb=1,cntc=1;
        if(p>1){
            //if(a[0]!=b[0] && a[0]!= )
            for(int i=0; i<p-1; ++i){
                if(a[i]==a[i+1]) cnta++;
                else break;
                //if(b[i]==b[i+1]) cntb++;
            }
            for(int i=0; i<p-1; ++i){
                //if(a[i]==a[i+1]) cnta++;
                if(b[i]==b[i+1]) cntb++;
                else break;
            }
            if(a[0]==b[0] && cnta!=p ) cout<<p-(cnta+cntb)<<endl;
            else cout<<p-(max(cnta,cntb))<<endl;
        }
        else cout<<"0\n";


    }
    return 0;
}
