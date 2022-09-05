#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[100];
    scanf("%s",&c);
    int s=0,i=0,a=0,m=0,z=0;
    int l=strlen(c);
    if(c[0]!='S' ||  c[1]!='I' || c[2]!='A' || c[3]!='M') || z=1)
    {
        for(int j=0; j<l; j++)
        {
            if(c[j]=='S') s++;
            if(c[j]=='I') i++;
            if(c[j]=='A') a++;
            if(c[j]=='M') m++;
        }
    }
    if(s!=1 || i!=1 || a!=1 || m!=1 || l!=4) z=1;
    if(z==1) printf("Not matched\n");
    else printf("Matched\n");
            return 0;
        }
