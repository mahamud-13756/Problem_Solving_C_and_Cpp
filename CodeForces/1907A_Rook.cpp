//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1907/problem/A
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
        int a = s[1]- '0';
        for(int i=0; i<s.size(); ++i)
        {
            for(int j=0; j<8; ++j)
            {
                //string s1=char(s[i])+(char)(j+1);

                if(i==0){
                    if(j+1 != a) cout<<s[i]<<j+1<<endl;
                }
                if(i==1) if(s[0]!= char(j+97)) cout<<char(j+97)<<a<<endl;
            }

        }
    }
    return 0;
}
