#include <algorithm>
#include <string.h>
#include <vector>
#include <cstdio>
#include <climits>
#include <iostream>
using namespace std;


int main ()
{

    long long  N=5, arr[N],totalSum=0,Esum=0,Min = LLONG_MAX, Max = LLONG_MIN;

    for (int i=1; i<=N; i++)
    {
        cin>>arr[i];
        totalSum += arr[i];
    }

    for (int i=1; i<=N; i++)
    {
        Esum = totalSum - arr[i];
        Min = min(Min, Esum);
        Max = max(Max, Esum);
    }

    cout<<Min<<" "<<Max<<endl;
}
