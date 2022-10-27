//https://codeforces.com/problemset/problem/1560/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1001],j=1;

    for(int i=1; i<=1666; i++){
        if(i%3==0 || i%10==3){
            continue;
        }
        else{
            a[j]=i;
               j++;
        }
    }

    int t;
    cin>>t;

    int k;

    while(t--){
        cin>>k;
        cout<<a[k]<<endl;
    }


    return 0;
}
