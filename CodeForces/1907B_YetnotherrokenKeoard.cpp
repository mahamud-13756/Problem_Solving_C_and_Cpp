//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1907/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//==================================================================================|


#include<bits/stdc++.h>
using namespace std;


#define ll                  long long int
#define ull                 unsigned long long

#define py cout<<"YES\n";
#define pn cout<<"NO\n";


/*----Start Needed Function-----------------------------------------------*/

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
//-------------------------------------------------

// Function to calculate the number of pairs (C(n, r))
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
//------------------------------------------------------------




/*----Ended Needed Function-----------------------------------------------*/










//----Used Function in this Program---------------------------------

void solve()
{

}

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s; cin>>s;
        map<int, char> mp;
        vector<char> vc;
        int sz=s.size(),cntb=0,cntB=0;

        for(int i=0; i<sz; ++i) mp[i]=s[i];

        for(int i=0; i<sz; ++i)
        {
            if(mp[sz-1-i] =='b'){
               cntb++;
               mp.erase(sz-1-i);
               continue;
            }
            if(mp[sz-1-i] =='B'){
                cntB++;
                mp.erase(sz-1-i);
                continue;
            }

            if(((mp[sz-1-i]>=97) && (mp[sz-1-i] != 98)) && (cntb>0)){
                mp.erase(sz-1-i);
                cntb--;
            }
            else if(((mp[sz-1-i]<96) && (mp[sz-1-i] != 66)) && (cntB>0)){
                mp.erase(sz-1-i);
                cntB--;
            }else vc.push_back(mp[sz-1-i]);
        }
        reverse(vc.begin(),vc.end());
        for(auto it: vc) cout<<it;
        cout<<endl;

    }
    return 0;
}
