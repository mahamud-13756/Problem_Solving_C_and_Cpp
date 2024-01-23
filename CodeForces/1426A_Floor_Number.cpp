#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,b;
    float a,nn;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d %d",&n,&x);

        if(n<=2){
            printf("1\n");
        }
        else{
            nn=n-2;
            a=(nn/x);

            b=ceil(a);
            printf("%d\n",b+1);
        }



    }

    return 0;
}
