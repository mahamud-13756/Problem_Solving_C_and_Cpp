//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1923/problem/B
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
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll n, k;
        cin >> n >> k;
        ll h[n], pos[n];
        ll maxpos = 0;

        for (ll i = 0; i < n; ++i) {
            cin >> h[i];
        }

        // Find the maximum value in pos array
        for (ll i = 0; i < n; ++i) {
            cin >> pos[i];
            maxpos = max(maxpos, abs(pos[i]));
        }

        map<ll, ll> myMap;
        ll mp = abs(maxpos);

        for (ll key = -(abs(mp)); key <= abs(mp); ++key) {
            myMap[key] = 0;
        }

        for (ll i = 0; i < n; ++i) {
            myMap[pos[i]] = h[i];
        }

        ll b = 0, c = 0, d = 0;
        for (int i = 1; i <= mp; ++i) {
            c = myMap[i] + myMap[-i];
            if (c <= (b + k)) {
                b = b + k - c;
            } else {
                pn
                d = 1;
                break;
            }
        }
        if (d == 0) {
            py
        }
    }
    return 0;
}
