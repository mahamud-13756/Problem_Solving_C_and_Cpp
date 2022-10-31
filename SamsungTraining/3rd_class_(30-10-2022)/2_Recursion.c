#include<stdio.h>

int N;
int A[100];

void print(){
    int i;
    for(i=0; i<N; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void solve(int i){

}

int main()
{
    int i;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        A[i]=0;
    }

    print();

    return 0;//function er kaj ses.
}

