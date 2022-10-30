//https://codeforces.com/problemset/problem/230/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>arr[1000];
    int s,n,c,i;
    cin>>s>>n;

    for( i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);

    for( i=0;i<n;i++)

         {
             c=1;
             if(s<=arr[i].first)
             {
                 c=0;
                 break;
             }
             else
             {
                 s=s+arr[i].second;
             }
         }
         if(c==0){
            cout<<"NO\n";
         }

         else{
            cout<<"YES\n";
         }
    return 0;
}
