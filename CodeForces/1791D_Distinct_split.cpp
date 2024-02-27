//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1791/problem/D
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
int main(){

    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string a;           cin>>a;

        vector<int> pref(n,0),suff(n,0);
        set<char> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
            pref[i]=s.size();
        }
        s.clear();
        for(int i=n-1;i>-1;i--){
            s.insert(a[i]);
            suff[i]=s.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pref[i]+suff[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
