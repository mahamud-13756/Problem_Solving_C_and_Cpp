//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1934/problem/A
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



int maxVal(vector<int>&vc)
{
    int n=vc.size();
    sort(vc.begin(), vc.end());
    int ans = 2*(vc[n-1]-vc[0]);
    return ans;

}

//--------------------------------------//
void solve()
{
    ll n; cin>>n;
    ll ans=0;
    ll a[n]; for(ll i=0; i<n; ++i) cin>>a[i];

     sort(a,a+n);
     ll i=0, j=n-1, k=1, l=n-2;

     cout<<abs(a[i]-a[j])+ abs(a[j]-a[k])+ abs(a[k]-a[l])+ abs(a[l]-a[i])<<endl;
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
