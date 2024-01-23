//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,max1=0,min1=99999999999,counter=0,noCount=0;

    scanf("%lld",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        long long int a[n],x[n];


        for(int j=0; j<n; j++)
        {
            scanf("%lld %lld",&a[j],&x[j]);
        }

        //-------------Input Part End------------


        for(int j=0; j<n; j++)
        {
            if(a[j]==1)
            {
                if(max1<=x[j]) max1 =x[j];
            }
            if(a[j]==2)
            {
                if(min1>x[j]) min1 =x[j];
            }

        }

        for(int j=0; j<n; j++)
        {
            if(a[j]==3)
            {
                if(x[j]>=max1 && x[j]<=min1)
                {
                    noCount++;
                }
            }

        }

        if(max1<min1)
        {
            for(long long int i = max1; i <= min1; i++)
            {
                counter++;
            }

            printf("----%d---\n",(counter-noCount));
        }
        else
        {
            printf("--0-----\n");
        }







    }



    return 0;
}
