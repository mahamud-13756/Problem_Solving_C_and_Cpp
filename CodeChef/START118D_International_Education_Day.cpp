//https://www.codechef.com/START118D/problems/IED
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if((A*C)>(B*C)) printf("%d\n",(A*C));
    else printf("%d\n",(B*C));

    return 0;
}
