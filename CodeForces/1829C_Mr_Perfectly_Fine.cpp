//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1829/problem/C
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

// Sum of Digits
int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;        // Remove the last digit
    }

    return sum;
}
//-----------------------------------------------------------------


/*----Ended Needed Function-----------------------------------------------*/










//----Used Function in this Program---------------------------------

void solve()
{

}

//----int main()----------------------------------------------------
int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        int n;
        std::cin >> n;
        int stn=n;
        std::multimap<int, int> mmp;
        while (n--) {
            int m, s;
            std::cin >> m >> s;
            mmp.insert({m, s});
        }
        int cnt00=0, cnt10=0, cnt1=0;
        int mn1 = INT_MAX/2, mn10 = INT_MAX/2, mn11 = INT_MAX/2;
        for (const auto& it : mmp) {
           // std::cout << it.first << " " << it.second << std::endl;
            int val = it.second;
            if (val == 1) {
                mn1 = std::min(mn1, it.first);
                cnt1++;
            }
            else if (val == 10) {
                mn10 = std::min(mn10, it.first);
                cnt10++;
            }
            else if (val == 11) {
                mn11 = std::min(mn11, it.first);
            }
            else {
                cnt00++;
            }
        }
        if((cnt00+cnt1)==stn|| (cnt00+cnt10)==stn){
            cout<<"-1\n";
            cnt00=0; cnt10=0; cnt1=0;
        }
        else {
            int ans = std::min(mn11, (mn1 + mn10));
            std::cout << ans << std::endl;
        }

    }
    return 0;
}

/**
2
12
01 7
01 6
10 5
11 3
00 1
11 2
10 9
00 7
11 99
10 8
01 3
10 2
**/
