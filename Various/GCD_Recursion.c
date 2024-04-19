#include<stdio.h>

int GCD(int, int, int ,int);

int main()
{
    int a,b;
    scanf("%d %d", &a , &b);

     //printf("Max val:%d",max(a,b));
   //printf("min val: %d",a>b?b:a);
    int  mx=0;
    int i=1;
    

    int c = GCD(a,b,mx,i);
    printf("hjdfdg: %d\n", c);



    return 0;
}

int GCD(int a, int b, int mx, int i)
{
    
    if(a%i==0 && b%i==0){
        mx = i>mx?i:mx ;
    }
    
    if(i!= a>b?b:a)
        GCD(a,b,mx,++i);
    else return mx;
    

}