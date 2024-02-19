//============================================================================
    // problem link : https://codeforces.com/contest/1932/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : implementation, Brute Force. Rating 900, Ansi-style
    // status       : accepted
    //============================================================================

#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"


/////////////////////////////////////////////////////////////////

void solve()
{
    int a,n,b, c;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin>>v[i];
    b=v[0];
    for(int i=1; i<n; ++i)
    {
        if(v[i]>b) b=v[i];
        else{
            int temp=v[i];
            int j=2;

        }
    }

}

for (int i-0; 1<n; i++){
cin»>v[il;
for (int i=1;i‹n;i++){
afcvfilob)‹
b=v[it;
else{
int temp=v[il;
int j=2;
while (temp<=b) {
temp=v[i]*j:
j+
b-temp:
cout<<becendi
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
