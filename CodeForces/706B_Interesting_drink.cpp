//https://codeforces.com/problemset/problem/706/B

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,i,j,k,ans;
    cin>>n;
    int a[n],p;
    int cnt=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;// a is index

        cout<<ans<<endl;
    }
return 0;
}
















/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
     int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

     int q;
    cin>>q;
     int mrr[q];
    for(int i=0; i<q; i++){
        cin>>mrr[i];
    }
     int ans;
    for(int i=0; i<q; i++){
        ans=0;
        for(int j=0; j<n; j++){
            if(mrr[i]>=arr[j]){
                ans++;
            }

    }
    cout<<ans<<endl;
    }


    return 0;
}
*/
