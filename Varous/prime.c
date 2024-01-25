#include<stdio.h>
int main()
{
    while(1){
    int n, s,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=2; i<n-1; i++){
        s=n%i;
        if(s==0) flag=1;
    }

    if(flag==1) printf("%d is not prime number\n",n);
    else{
        if(n>1){
            printf("%d is prime number!\n",n);
        }
        else printf("Please give valid input\n\a");
    }

    }


return 0;
}
