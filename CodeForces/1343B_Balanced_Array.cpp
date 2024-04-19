//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1343/B
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
        int n; cin>>n;
        long long int sume=0, sumo=0,cnt=0;
        if((n/2)%2==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2) {
                cout<<i<<" ";
                sume+=i;
            }
            for(int i=1; cnt<(n/2)-1; i+=2){
                cout<<i<<" ";
                sumo+=i;
                cnt++;
            } cout<<sume-sumo<<endl;
        }
    }
    return 0;
}
