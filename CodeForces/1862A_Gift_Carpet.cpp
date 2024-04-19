//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1862/problem/A
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
        int r,c; cin>>r>>c;
        char a[r][c];
        string name="vika";
        int cnt=0;

        //int put row wise as usual
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j){
                cin>>a[i][j];
            }
        }

        //convert row into column.
        for(int i=0; i<c; ++i)
        {
            for(int j=0; j<r; ++j){
                //cout<<a[j][i];
                if(a[j][i]==name[cnt]){
                    cnt++;
                    break;
                }
            }//cout<<endl;
            if(cnt==name.size()) break;
        }

        if(cnt==name.size()) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
