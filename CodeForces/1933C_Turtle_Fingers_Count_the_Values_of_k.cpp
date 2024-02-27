//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1933/problem/C
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
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b ,l; cin>>a>>b>>l;
        ll index,index2,k=0,z=0;
        set<ll> st;
        for(ll i=0; i<=l; ++i)
        {
            if(pow(a, i)>l){
                index=i;
                break;}
        }
        ll mx_index=max(index, z);
        for(ll i=0; i<=l; ++i)
        {
            if(pow(b, i)>l){
                index2=i;break;}
        }
        mx_index=max(mx_index, index2);

        for (ll i = 0; i <=mx_index; ++i) {
            for (ll j = 0; j <=mx_index; ++j) {


                if (l % static_cast<long long int>(pow(a, i) * pow(b, j)) == 0){
                    st.insert(l / static_cast<long long int>(pow(a, i)* pow(b, j)));
                }
            }
        }
        cout<<st.size()<<endl; st.clear();
    }
    return 0;
}
