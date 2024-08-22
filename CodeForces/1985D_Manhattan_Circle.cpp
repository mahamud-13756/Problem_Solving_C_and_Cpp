//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1985/D
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
        int n,m; cin>>n>>m;
        char c;
        int rl=-5, rh=-5, cl=1e9, ch=-5;

        for(int i=1; i<=n; ++i)
        {
            for(int j=1; j<=m; ++j)
            {
                cin>>c;
                if(c=='#' && rl==-5) rl=i;
                if(c=='#') rh=i;

                if(c=='#' && cl>j) cl=j;
                if(c=='#' && ch<j) ch=j;

            }
        }

        int mrow=(rl+rh)/2;
        int mcol=(cl+ch)/2;

        cout<<mrow<<" "<<mcol<<endl;
    }
    return 0;
}
