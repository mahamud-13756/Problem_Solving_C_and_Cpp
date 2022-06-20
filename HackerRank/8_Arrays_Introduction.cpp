// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[N];


    for(int i=0; i<N;i++)
    {
        cin>>a[i];
    }

    for(int j=N-1; j>=0; j--)
    {

        cout<<a[j]<<" ";
    }

    return 0;
}
