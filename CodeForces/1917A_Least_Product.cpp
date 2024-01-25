//https://codeforces.com/problemset/problem/1917/A
//constructive_algorithms math *800
// this is wrong code
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n,p=1;
        scanf("%d",&n);
        long long int a[n];
        for(int j=0; j<n; j++){
            scanf("%lld",&a[j]);
        }
        for(int k=0; k<n; k++){
            p = p * a[k];
        }
        //printf("%d\n",p);
        if(p <=0){
            printf("0\n");
        }
        else{
            printf("1\n");
            printf("%d 0\n",(n-1));

        }
    }

    return 0;
}
