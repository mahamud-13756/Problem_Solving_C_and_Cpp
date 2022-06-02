#include<iostream>
using namespace std;

int main()
{
    int a=20;
    float f=4.7;
    char c='a';
    bool b=1;
    cout <<"The value of a int "<<sizeof(a)<<endl;
    cout <<"The value of a float "<<sizeof(f)<<endl;
    cout <<"The value of a char "<<sizeof(c)<<endl;
    cout <<"The value of a bool "<<sizeof(b)<<endl;

    // type modifiers

    short int si;
    long int li;
    cout <<"The value of si "<<sizeof(si)<<endl;
    cout <<"The value of li "<<sizeof(li)<<endl;

    return 0;
}