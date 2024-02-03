//https://codeforces.com/problemset/problem/337/A
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////



int main()
{
    int n,m;
    vector<int> vc;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        vc.push_back(a[i]);
    }
    sort(vc.begin(), vc.end());

    cout<<vc[n-1]-vc[0]<<"\n";


    return 0;
}
