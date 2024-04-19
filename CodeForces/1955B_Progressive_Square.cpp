//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1955/B
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
        int n, c, d; cin>>n>>c>>d;
        vector<int> a(n*n);
        for(int i=0; i<n*n; ++i) cin>>a[i];

        sort(a.begin(), a.end());

        vector<int> vc1,b;

        for(int i=0; i<n; ++i)
        {
            vc1.push_back(a[0]+(i*d));
        }

        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                b.push_back(vc1[i]+(j*c));
            }
        }
        sort(b.begin(), b.end());

        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";


    }

    return 0;
}
