//https://www.codechef.com/START118D/problems/JOINSTATE
//submitted
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
       long long int sum=0,c=0;


       for(int k=0; k<n; k++){
            sum = sum+a[k];
            if(sum>=m) {
                c++;
                sum=0;
            }
            //sum = sum+a[k];


       }
       cout<<c<<"\n";


    }

    return 0;
}
