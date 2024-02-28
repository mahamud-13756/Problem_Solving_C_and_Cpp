//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1791/problem/E
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 1100 , Ansi-style
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
        vector<ll> vc(n);
        int cnt=0;
        ll sum=0;
        for(int i=0; i<n; ++i)
        {
            cin>>vc[i];
            if(vc[i]<0) cnt++;
            vc[i]=abs(vc[i]);
            sum+=vc[i];


        }
        if(cnt%2==0){
            cout<<sum<<endl;
        }
        else{
            sort(vc.begin(), vc.end());
            cout<<sum-vc[0]-vc[0]<<endl;
        }
/**
        int n;cin>>n;
        int A[n];
        int cnt = 0,sum = 0,mn = 1e10;
        for(int &a:A){cin>>a,cnt+=(a<0),sum+=abs(a),mn=min(mn,abs(a));}
        if(cnt&1)
        sum-=2*mn;
        cout<<sum;
        cout<<endl;**/
    }
    return 0;
}
