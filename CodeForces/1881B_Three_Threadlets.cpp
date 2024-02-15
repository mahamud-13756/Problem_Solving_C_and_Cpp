//https://codeforces.com/problemset/problem/1881/B
// submitted 900
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int st=min(a,b);
        int lmin=min(st,c);
        //cout<<lmin;

        if(b%lmin==0 && a%lmin==0 && c%lmin==0){
            int div1=a/lmin;
            int div2=b/lmin;
            int div3=c/lmin;
            if(((div1+div2+div3)-3) <=3) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";

    }
    return 0;
}
