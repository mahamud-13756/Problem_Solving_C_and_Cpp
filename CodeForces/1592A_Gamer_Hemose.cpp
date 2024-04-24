//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1592/problem/A
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
        int n,h; cin>>n>>h;
        int a[n]; for(int i=0; i<n; ++i) cin>>a[i];
        sort(a, a+n);
        int x = a[n-1];
		int y = a[n-2];
		if (h%(x+y)==0) cout<<2*(h/(x+y));

		else if (h%(x+y)<=x) cout<<2*(h/(x+y))+1;

		else cout <<2*(h/(x+y))+2;

		cout<<endl;



    }
    return 0;
}
