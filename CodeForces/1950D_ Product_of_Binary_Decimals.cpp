//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link :
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating , Ansi-style
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


// Function to check if a number is binary decimal
bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        num /= 10;
    }
    return true;
}

// Function to find if a number is representable as a product of binary decimals
bool isRepresentable(int n) {
    if (n == 1) {
        return true; // 1 can always be represented as 1
    }

    // Iterate through all possible binary decimals
    for (int i = 1; i <= n; ++i) {
        // Check if i divides n and if i is a binary decimal
        if (n % i == 0 && isBinaryDecimal(i)) {
            int quotient = n / i;
            // If the quotient becomes 1, then n is representable as a product of binary decimals
            if (quotient == 1) {
                return true;
            }
            // Check if the quotient is a binary decimal
            if (isBinaryDecimal(quotient)) {
                return true;
            }
        }
    }
    return false;
}

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n; cin >> n;

    if (isRepresentable(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }

    return 0;
}

