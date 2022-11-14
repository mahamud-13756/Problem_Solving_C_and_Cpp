//https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s=0;
    cin>>n;

    int a[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    int x=0;
    x+=a[0][0];
    x+=a[0][1];
    set<int> v;
    for(int i=1; i<n; i++)
    {
        x-=a[i][0];
        x+=a[i][1];
        v.insert(x);
    }
    vector<int> q(v.begin(),v.end());
    cout<<q[v.size()-1]<<endl;

    return 0;
}
