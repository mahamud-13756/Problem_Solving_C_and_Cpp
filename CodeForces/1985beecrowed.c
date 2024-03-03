#include<stdio.h>
int main()
{
    int n;
    double s=0.0,c,t;
    scanf("%d",&n);

    int a;
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a); scanf("%lf",&c);
    

        if(a==1001)
            t=c*1.5;
        else if(a==1002)
            t=c*2.5;
        else if(a==1003)
            t=c*3.5;
        else if(a==1004)
            t=c*4.5;
        else if(a==1005)
            t=c*5.5;

        sum+=t; t=0;
    }

    printf("%.2lf\n",sum);


}