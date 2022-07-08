//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void update(int *a,int *b)
{

    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y);
}

int main()
{
    int a,b;

    int *aptr=&a,*bptr=&b;

    cin>>a>>b;
    //cout<<a<<endl;
   // cout<<b<<endl;

    update(aptr, bptr);

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
