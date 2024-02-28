//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : Release 20.03  rev 11983 (2020-03-12 18:24:30)   gcc 8.1.0 Windows/unicode - 64 bit
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 800 , Ansi-style
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
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        char ch[10][10];
        ll sum = 0;
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                cin >> ch[i][j];
                if (ch[i][j] == 'X')
                {
                    if ((i >= 4 && i <= 5) && (j >= 4 && j <= 5))
                        sum += 5;
                    else if ((i >= 3 && i <= 6) && (j >= 3 && j <= 6))
                        sum += 4;
                    else if ((i >= 2 && i <= 7) && (j >= 2 && j <= 7))
                        sum += 3;
                    else if ((i >= 1 && i <= 8) && (j >= 1 && j <= 8))
                        sum += 2;
                    else if ((i >= 0 && i <= 9) && (j >= 0 && j <= 9))
                        sum += 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
