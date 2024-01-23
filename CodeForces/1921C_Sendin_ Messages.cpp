//https://codeforces.com/problemset/problem/1921/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    long long int f,a,b;

    for(i=0; i<t; i++)
    {
        scanf("%d %lld %lld %lld",&n,&f,&a,&b);
        //printf("%d %lld %lld %lld",n,f,a,b);
        long long int m[n+1];
        m[0]=0;
        for(j=1; j<n+1; j++)
        {
            scanf("%lld",&m[j]);
        }

        for(j=1; j<n+1; j++)
        {
            if( (f- (m[j]-m[j-1])*a) > (f-b) )
            {
                f = (f- (m[j]-m[j-1])*a);
            }
            else
            {
                f = (f-b);
            }
        }

        if(f>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }



    return 0;
}
