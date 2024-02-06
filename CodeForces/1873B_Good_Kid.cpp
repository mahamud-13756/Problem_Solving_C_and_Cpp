//https://codeforces.com/contest/1873/problem/B
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
    int t;
    cin>>t;
    while(t--)
    {
        ll mul=1;
        int n;
        cin>>n;
        vector <int> vc(n);
        for(int i=0; i<n; i++)
        {
//            int a;
//            cin>>a;
//            vc.push_back(a);
            cin>>vc[i];

        }
        sort(vc.begin(), vc.end());

        for(int i=1; i<n; i++)
        {
            //cout<<vc[i];
            mul = mul*vc[i];
        }
        mul=(vc[0]+1)*mul;
        cout<<mul<<"\n";


    }


    return 0;
}
