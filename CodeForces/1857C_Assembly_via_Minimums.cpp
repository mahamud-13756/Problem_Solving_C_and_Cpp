//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===========|
    // problem link : https://codeforces.com/problemset/problem/1857/C
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


𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…


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





𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…▁▂▃▄▅▆▇█ 𝙇𝙤𝙖𝙙𝙞𝙣𝙜…






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
        solve();
    }
    return 0;
}
