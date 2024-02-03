//https://codeforces.com/contest/1918/problem/B
//submitted 900
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int,int>p[n];
        for(int i=0; i<n; i++)
        {
            cin>>p[i].first;
        }
        for(int i=0; i<n; i++)
        {
            cin>>p[i].second;
        }
        sort(p,p+n);
        for(int i=0; i<n; i++)
        {
            cout<<p[i].first<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<p[i].second<<" ";
        }
        cout<<endl;

    }


    return 0;
}

//with vector
/*
#include<bits/stdc++.h>
using namespace std;
#define in int
#define ll long long

void minimize()
{
    in n; cin>>n;
    vector<pair<in,in>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin>>v[i].second;
    }
    sort(v.begin(),v.end()); // sort first value.
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" ";//<<endl;
       // cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i].second<<" ";//<<endl;
        //cout<<endl;
    }
    cout<<endl;
}

int32_t main()
{
    in t; cin>>t;
    while(t--)
    {
       minimize();
    }
    return 0;
}



*/

