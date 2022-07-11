// https://www.hackerrank.com/challenges/a-very-big-sum/problem?h_r=next-challenge&h_v=zen

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a[n],sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    cout<<sum<<endl;

    return 0;
}
