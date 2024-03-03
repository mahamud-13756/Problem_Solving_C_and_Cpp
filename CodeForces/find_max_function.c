#include<stdio.h>
int main(void)
{
    int i,n,B;
    scanf("%d",&n);

    int a[n];
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

    find_max(a,n);

    printf("%d is the bigest number in the arry",B);
}


int find_max(int a[], int n)
{
    int i=1;
    int t=a[0];
    for(int i=1;i<=n;i++){
        if(t<a[i]){
            t=a[i];
            i++;
        }
    }
    return t;
}