#include<stdio.h>
#include<conio.h>

void swapp(int *, int *);
int main()
{
    int a,b,s; 
    scanf("%d %d",&a,&b);
    printf("Before a=%d b=%d\n",a,b);

    swapp(&a,&b);
    printf("After a=%d b=%d and subtract is s=%d\n",a,b,(a-b));
    return 0;
}

void swapp(int *x, int *y)
{
    int t;
    t= *x;
    *x=*y;
    *y=t;  
}