//https://codeforces.com/problemset/problem/1921/B
//submitted 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cb=0,ca=0,can=0;
        cin>>n;
        string a,b;
        cin>>a>>b;


        for(int i=0; i<n;i++){
            if(b[i]=='1') cb++;
            if(a[i]=='1') ca++;
            if(b[i]=='1' && b[i]==a[i]) can++;
        }
        if(ca>cb) cout<<ca-can<<"\n";
        else cout<<cb-can<<"\n";
    }

    return 0;
}
