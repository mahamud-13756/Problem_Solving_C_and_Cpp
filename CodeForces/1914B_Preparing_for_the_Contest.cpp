//https://codeforces.com/problemset/problem/1914/B
//submitted 800 rating
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> vc(n);
        for(int i=n; i!=0; i--){
            vc[n-i]=i;
        }
        int s=n-k-1;
        sort(vc.begin()+ s , vc.end());
        for(int j=0; j<n; j++){
            cout<<vc[j]<<" ";
        }
        cout<<"\n";


    }



    return 0;
}

