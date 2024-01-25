////https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

// another way
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void update(int *m,int *n)
{
    cout<<*m<<" HI "<<*n<<endl;
    cout<<m<<" HI A "<<n<<endl;
    int x,y;
    x = *m + *n;
    y = *m - *n;
    *m= x;
    *n=abs(y);
    cout<<*m<<endl;
    cout<<*n<<endl;
    // cout<<a<<"  "<<b<<endl;
}

int main()
{
    int mm,nn;

    //int *aptr=&a,*bptr=&b;

    cin>>mm>>nn;
    cout<<&mm<<" HI M A "<<&nn<<endl;
    cout<<mm<<endl;
    cout<<nn<<endl;

    update(&mm, &nn);
    int *m,*n;
    cout<<*m<<endl;
    cout<<*n<<endl;

    return 0;
}
