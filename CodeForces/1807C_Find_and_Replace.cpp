//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1807/problem/C
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
        int n; cin>>n;
        string s; cin>>s;
        unordered_set<char> uniChars;
        int as,cnt=0;
        for (char ch : s) {
            uniChars.insert(ch);
        }

        for (auto it = uniChars.begin(); it != uniChars.end(); ++it) {
            //cout << *it << " ";
            int cn=0;
            for(int j=0; j<n; ++j){
                if(*it==s[j]){
                  if(cn==0){
                    as=j%2;
                    cn=1;
                  }

                  if(j%2==as%2){cnt++;}
                }
            }
        }
        //cout<<cnt<<endl;
        if(cnt==n) py
        else pn




    }
    return 0;
}
