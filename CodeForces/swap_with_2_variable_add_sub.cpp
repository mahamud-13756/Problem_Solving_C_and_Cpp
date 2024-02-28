//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;

    a = a-b;
    b = a+b;
    a = b-a;
    
    cout<<a<<" "<<b;
    return 0;
}