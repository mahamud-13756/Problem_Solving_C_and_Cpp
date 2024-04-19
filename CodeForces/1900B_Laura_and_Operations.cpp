//========�In the name of ALLAH, The Most Gracious and The Most Merciful�==========| Last Update: 19-022024
    // problem link : https://codeforces.com/problemset/problem/1900/B
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

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c; cin>>a>>b>>c;
        int one, two, three;
        //int as = max(a,b);
        //int mx =max(as,c);

        if(abs(b-c)%2==0) one=1;
        else one = 0;

        if(abs(a-c)%2==0) two=1;
        else two = 0;

        if(abs(a-b)%2==0) three=1;
        else three = 0;

        cout<<one<<" "<<two<<" "<<three<<endl;
    }
    return 0;
}
