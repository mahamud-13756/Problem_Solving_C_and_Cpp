//https://codeforces.com/problemset/problem/460/A
//rating 900

#include<bits/stdc++.h>
//#include<iostrem.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;


    int res = (n-1)/(m-1);
    // int sum=0,rem;
    // sum+=n;
    // while(n>=m)
    // {
    //     n = n/m;
    //     rem = n%m;
    //     sum+=n;
    //     n += rem;
    //     //if(n<m) break;
        
    // }


    cout<<n+res<<endl;
    return 0;
}