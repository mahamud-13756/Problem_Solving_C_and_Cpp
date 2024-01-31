//https://codeforces.com/problemset/problem/1916/A
//submitted 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,factors[]={1, 7, 17, 119, 289, 2023};
        cin>>n>>k;
        long long int mul=1;

        int b[n];
        for(int i=0; i<n; ++i){
            cin>>b[i];
            mul=mul*b[i];
        }

        if(2023%mul!=0) cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<(2023/mul)<<" ";

            for(int i=0; i<k-1; ++i){
                cout<<1<<" ";
            }
            cout<<"\n";
        }



    }

    return 0;
}
