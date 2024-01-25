//Rating 1100
//https://codeforces.com/problemset/problem/1921/D
#include<bits/stdc++.h>
using namespace std;

void descending(long long int *, int);
void ascending(long long int *, int);
void compared(long long int *, long long int *,int);

int main()
{
    int t,D=0;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n,m;
        scanf("%d %d",&n,&m);
        long long int a[n],b[m],*an,*bm;
        an = a;
        bm = &b[0];

        for(int j=0; j<n; j++){
            scanf("%lld",(an+j));
        }
        for(int k=0; k<m; k++){
            scanf("%lld",(bm+k));
        }
        //--------End input line--------

        descending(an,n);
        for(int z=0; z<n; z++)
            printf("%lld",*(an+z));
        printf("\n\n");
        //ascending(bm,m);



        for(int l=0; l<n; l++){
            D = D + abs(a[l]-b[l]);
        }
        printf("%d\n",D);






    }
}


void descending(long long int *p, int n)
{
    int s;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(*(p+j) > *(p+j+1)){

            }
            else{
                s=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=s;
            }

        }
    }


}

void ascending(long long int *q, int m)
{
    int s;
    for(int i=0; i<m-1; i++){
        for(int j=0; j<m-1; j++){
            if(*(q+j) < *(q+j+1)){

            }
            else{
                s=*(q+j);
                *(q+j)=*(q+j+1);
                *(q+j+1)=s;
            }


        }
    }



}

void compared(long long int *xn, long long int *xm,int size_n)
{

    for(int i=0; i<size_n; i++){
        for(int j=0; j<size_n; j++){
            s = abs(xn[i] - xm[j]);
            if(s)


        }

    }
}


