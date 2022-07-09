#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n],Max=INT_MIN,Min=INT_MAX;//<climits> max and min value of c++

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {

        if(Max<a[i])
        {
            Max=a[i];
        }

        if(Min>a[i])
        {
            Min=a[i];
        }
    }

    cout<<"Max value: "<<Max<<endl;
    cout<<"Min value: "<<Min<<endl;

    return 0;
}
