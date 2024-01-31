//
//
#include<stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);

    double a,b,c,d;
    scanf("%lf %lf",&a,&b);
    c=((b*15)/100);
    d=c+a;
    printf("TOTAL = R$ %.2lf",d);


    return 0;
}
