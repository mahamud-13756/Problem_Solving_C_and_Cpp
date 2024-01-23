//https://codeforces.com/problemset/problem/1921/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x[4],y[4],a1,a2;
    int t,i,j,area;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%f %f",&x[j],&y[j]);
        }
        a1= sqrt(((x[0]-x[1])*(x[0]-x[1])) + ((y[0]-y[1])*(y[0]-y[1])));
        //printf("%f\n",a1);
        a2= sqrt(((x[0]-x[2])*(x[0]-x[2])) + ((y[0]-y[2])*(y[0]-y[2])));
        //printf("%f",a2);

        if(a1>a2){
                area=a2*a2;
            printf("%d\n",area);

        }
        else
        {
            area=a1*a1;
            printf("%d\n",area);
        }

    }


   /* for(i=0; i<t; i++)
    {
        for(j=0; j<4; j++)
        {
        a1= sqrt(((x[0]-x[1])*(x[0]-x[1])) + ((y[0]-y[1])*(y[0]-y[1])));
        //printf("%f\n",a1);
        a2= sqrt(((x[0]-x[2])*(x[0]-x[2])) + ((y[0]-y[2])*(y[0]-y[2])));
        //printf("%f",a2);

        if(a1>a2){
                area=a2*a2;
            printf("%d\n",area);

        }
        else
        {
            area=a1*a1;
            printf("%d\n",area);
        }
        }


    }
*/


    return 0;
}
