//https://www.codechef.com/START118D/problems/LITRATE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
       float L,P,c,d;
       scanf("%f %f",&L,&P);

       c=(100/L);
       d=c*P;
       //printf("%f",d);
       if(d>=75.0) printf("YES\n");
       else printf("NO\n");
    }

    return 0;
}
