//https://codeforces.com/problemset/problem/158/A

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],k,cnt=0,i;
    cin>>k;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }

    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;



    return 0;
}
