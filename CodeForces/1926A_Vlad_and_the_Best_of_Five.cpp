//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1926/problem/0
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


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"



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



//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string s; cin>>s;

    int cnt=0,cntb=0;
    for(int i=0; i<5; ++i)
    {

        if(s[i]=='A') cnt++;
        else cntb++;
    }

    if(cnt>cntb)cout<<"A"<<endl;
    else cout<<"B"<<endl;
    }
    return 0;
}
