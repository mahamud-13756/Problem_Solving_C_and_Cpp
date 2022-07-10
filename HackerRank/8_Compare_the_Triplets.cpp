// https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include<iostream>
using namespace std;

int main()
{
    int a[3],b[3],ca=0,cb=0;

    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            ca++;
        }
        else if(b[i]>a[i])
        {
            cb++;
        }
        else
        {

        }
    }

    cout<<ca<<" "<<cb<<endl;

    return 0;
}
