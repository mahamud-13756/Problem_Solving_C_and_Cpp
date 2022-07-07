#include<iostream>
using namespace std;

int main()
{
    int a=10;

    int *aptr=&a;

    //int *aptr;
    //aptr=&a;

    cout<<a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    *aptr=25;

    cout<<a<<endl;
    cout<<*aptr<<endl;



    return 0;
}
