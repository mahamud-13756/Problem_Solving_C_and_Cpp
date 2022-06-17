//https://codeforces.com/problemset/problem/1/A
#include<iostream>
using namespace std;

int main()
{
    long long n,m,a,p,q;
    cin>>n>>m>>a;
    if(n%a==0){p=n/a;}
    else{p=n/a+1;}
    if(m%a==0){q=m/a;}
    else{q=m/a+1;}
    cout<<p*q<<endl;

    return 0;
}




