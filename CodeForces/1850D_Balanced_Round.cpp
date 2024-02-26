//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1850/problem/D
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
    while(tc--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
        }

        sort(a.begin(), a.end());
//        for(auto it: a)
//        {
//            cout<<it<<" ";
//        }cout<<endl;

        int cnt=0,mx=0;
        if(n==1) cout<<"0\n";
        else{
        for(int i=0; i<a.size(); ++i)
        {


                if(a[i]+k>=a[i+1]){
                cnt++;
                if(i==a.size()-2){
                    mx=max(mx, (cnt+1));
                    break;
                }
            }
            else{
                mx=max(mx, (cnt+1));
                cnt=0;
            }
        }
        cout<<n-mx<<endl;}

    }
    return 0;
}
