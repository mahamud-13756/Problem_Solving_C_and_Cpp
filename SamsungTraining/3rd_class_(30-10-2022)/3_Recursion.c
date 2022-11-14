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

/*
void solve(){
    int i;
    for(i=0; i<N; i++){
        A[i]=0;
    }
}
*/
void solve(int i){
    if(i==N){
        print();
        return;
    }
    A[i]=0;          // 0 er jaigai 'i' dile joto dibo tar age porjonto print korbe
    solve(i+1);

}


int main()
{
    scanf("%d",&N);
    solve(0);
    //print();

    return 0;//function er kaj ses.
}


