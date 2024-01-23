#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);

    if(a%3==0){
        printf("There is no remainder.");
    }
    else{
        b=a/3;
        printf("The cei value is %d",b+1);
    }

    return 0;
}
