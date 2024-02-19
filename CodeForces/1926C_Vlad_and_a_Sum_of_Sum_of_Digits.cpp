//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1926/problem/C
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
int sumOfDigits(int number){
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}
int sumOfIntegers(int n) {
    cout<<(n * (n + 1) / 2)<<endl;
}

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        ll total=45;
        //cout<<sumOfDigits(n)<<endl;
        if(n<10) sumOfIntegers(n);
        else{
            while(n!=9){
                total+=sumOfDigits(n);
                n--;
            }
            cout<<total<<endl;
        }

    }
    return 0;
}
