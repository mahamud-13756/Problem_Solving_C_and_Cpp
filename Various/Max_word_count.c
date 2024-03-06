#include<stdio.h>
// precomputation process
int main(){
    char a[100];
    gets(a);
    size_t size = sizeof(a) / sizeof(a[0]);
  
    printf("The length of the array is %d \n", size);

    char c[100]={0};
    for(int i=0; i<size; ++i){
        c[a[i]-96]++;
    }
    //size_t sizec = sizeof(c) / sizeof(c[0]);
    int mx=-1,st;
    for(int i=0; i<=26; ++i){
        printf("%d ",c[i]);
        if(c[i]>mx) {mx=c[i];st=i;}
    }

    printf("\nThe max value is: %d\n",mx);
    printf("The max counted Character is: %c",st+96);
}