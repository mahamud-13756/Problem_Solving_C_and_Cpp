//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1926/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 800, Ansi-style
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
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        char a[n][n];
        int cnt = 0;
        vector<int> vc;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (a[i][j] =='1') cnt++;
            }
            if (cnt > 0) vc.push_back(cnt);
        }

        int chk = 0;
        for (int i = 0; i < vc.size(); ++i) {
            if (vc[i] == vc[0]) chk++;
        }

        if (chk==vc.size()) {
            cout<<"SQUARE"<< endl;
        } else {
            cout<<"TRIANGLE"<< endl;
        }
    }
    return 0;
}
