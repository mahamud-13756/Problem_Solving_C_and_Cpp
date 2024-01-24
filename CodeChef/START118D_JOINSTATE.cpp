//https://www.codechef.com/START118D/problems/JOINSTATE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
       long long int n, m;
       scanf("%lld %lld",&n,&m);
       long long int a[n];
       for(int j=0; j<n; j++){
        scanf("%lld",&a[j]);
       }
       long long int countt=0,countt1=0, countt2=0;


       for(int k=0; k<n; k++){
        if(m<=a[k]){
            countt++;
        }

       }

       if(n%2==0){
       for(int l=0; l<n-1; l++){
        if( m <= (a[l]+a[l+1])){
            countt1++;
            l++;
        }
       }
       }
        else{
       for(int z=0; z<n; z++){
         if( m <= (a[z]+a[z+1]+a[z+2])){
            countt2++;
            z=z+2;
        }
        }
        }

       if(countt >= countt1 && countt >= countt2) printf("%lld\n",countt);
       else{
        if(countt1 >= countt2) printf("%lld\n",countt1);
        else printf("%lld\n",countt2);
       }





    }

    return 0;
}
