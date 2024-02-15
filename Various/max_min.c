#include<stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d",&a[i]);
    }
    int mx=9999999;
    int mn=-9999999;

    for(int i=0; i<n; ++i){//[1,2,3,4,5] 
        if(a[i]>mn) mn=a[i];//1 
        if(a[i]<mx) mx=a[i];//1
    }

    printf("Maximum is: %d\n",mn);
    printf("Minimum is: %d\n",mx);


    return 0;
}