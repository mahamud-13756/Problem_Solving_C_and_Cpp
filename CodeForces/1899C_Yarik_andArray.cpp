//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1899/problem/C
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin >>n;
        int a[n]; for(int i=0; i<n; ++i) cin>>a[i];
        int crnt=0;
        int mx=INT_MIN;
        for(int i=0; i<n; ++i){ //kadane's algorithm for find max subarray
            if(i>0 && ((a[i-1]&1) == (a[i]&1))){
                crnt = a[i];
                if(crnt>mx) mx=crnt;
                //mx = max(mx,crnt);
            }else{
                crnt=max(a[i],crnt+a[i]);
                //mx = max(mx,crnt);
                if(crnt>mx) mx=crnt;
                //if(crnt<0) crnt=0;
            }
        }
        cout<<mx<<endl;

    }
    return 0;
}
