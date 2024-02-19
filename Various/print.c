#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);

    printf("A = %d, B = %d, C = %d\n",A,B,C);

    printf("A =       %d, B =         %d, C =\n        %d\n",A,B,C);
    
    printf("A = %010d, B = %010d, C =\n %010d\n",A,B,C);
    printf("A = %d      , B = %d        , C =\n %d       \n",A,B,C);


}