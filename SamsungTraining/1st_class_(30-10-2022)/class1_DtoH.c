// // Decimal  to Hexadecimal
#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=28; i>0; i-=4)
        if((n>>i)&15)
            break;
    for(; i>=0; i-=4){
        int digit=(n>>i)&15;
        if(digit<10)
            printf("%d", digit);
        else
            printf("%c", digit+55);
    }

    return 0;

}
