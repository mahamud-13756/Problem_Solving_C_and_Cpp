//https://codeforces.com/problemset/problem/1409/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    long long int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(b < a){
            swap(a,b);
        }
        long long int sub = 0,sum = 0,div = 0,mod = 0;
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout<<sum<<endl;
    }




    return 0;
}
