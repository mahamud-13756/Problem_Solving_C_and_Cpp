//https://codeforces.com/problemset/problem/1914/A
//submitted 800 div 3

#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////
/*

3
6
ACBCBC
7
AAAAFPC
22
FEADBBDFFEDFFFDHHHADCC
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c[n];
        //string c;
        //cin>>c;

        for(int i=0; i<n; i++)
        {
            cin>>c[i];

        }
        map<char, int> mp;
            for (int i = 0; i <n; ++i)
            {
                mp[c[i]]++;
            }
            int cnt=0;
            for (auto it:mp)
            {
                if((it.first-'A'+1)<=it.second) cnt++;
            }
            cout<<cnt <<"\n";

    }


    return 0;
}

