#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,j=0;
    cin>>n>>k;
    long long int a[n];


    for(int i=1; i<=n; i+=2){
        a[j]=i;
        j++;
    }


    for(int i=2; i<=n; i+=2){
        a[j]=i;
        j++;
    }

    cout<<a[k-1]<<endl;



    return 0;
}
