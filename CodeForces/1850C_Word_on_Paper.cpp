//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1850/problem/C
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
        char c[8][8];
        vector<char> vc;
        for(int i=0; i<8; ++i)
        {
            for(int j=0; j<8; ++j)
            {
                cin>>c[i][j];
                if(c[i][j]>'.'/**dot(.) ASCII -->46**/)
                    vc.push_back(c[i][j]);
            }
        }
        for(auto it: vc)
        {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}
