//https://codeforces.com/problemset/problem/579/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0;
    cin>>n;

    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n-1;
            a++;
        }

    }
    cout<<a+1<<endl;

    return 0;
}
