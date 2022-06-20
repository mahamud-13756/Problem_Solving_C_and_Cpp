// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int len1,len2;
    string a,b;
    cin>>a;
    cin>>b;

    char s;
    len1= a.size();
    len2= b.size();

    cout<<endl;
    cout<<len1<<"  " ;
    cout<<len2<<endl;

    string c=a+b;
    cout<<c<<endl;

    s=a[0];
    a[0]=b[0];
    b[0]=s;

    string x=a;
    string y=b;

    cout<<x<<" "<<y<<endl;

    return 0;
}
