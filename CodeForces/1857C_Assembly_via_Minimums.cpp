//========�In the name of ALLAH, The Most Gracious and The Most Merciful�==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1857/problem/C
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
        int n; cin>>n;
        int sz = (n*(n-1))/2;
        int a[sz],ans[n];
        for(int i=0; i<sz; ++i) cin>>a[i];

        sort(a, a+sz);

//        for(int i=0; i<sz; ++i)
//        {
//            cout<<a[i]<<" ";
//        }cout<<endl;
        reverse(a,a+sz);

//        for(int i=0; i<sz; ++i) //reberse check ok!
//        {
//            cout<<a[i]<<" ";
//        }cout<<endl;

        int sumOfN=0;
        for(int j=0; j<n-1; ++j){
            sumOfN+=j;
            ans[j]=a[sumOfN];
        }
        ans[n-1]=1e9;

        for(int i=0; i<n; ++i)
        {
            cout<<ans[i]<<" ";
        }cout<<endl;


    }
    return 0;
}
