#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
       // cout<<a[i]<<" "; //evabe dile dekhte kharap dekhai
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
