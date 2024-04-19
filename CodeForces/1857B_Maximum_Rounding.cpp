//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1857/problem/B
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

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string s; cin >>s;
    int pos = s.size();
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] - '0' >= 5)
        {
            if(i == 0) {
                s = '1' + s;
                pos = i + 1;
            }
            else {
                s[i - 1]++;
                pos = i;
            }
        }
    }
    for (int j = pos; j < s.size(); j++)
        s[j] = '0';
    cout << s << endl;
    }
    return 0;
}





/**
void solve()
{
            ull n,ten=10; cin>>n;
            vector<ull> vc,vc1;
            ull sum=0,carry=0;
            while(n){
            ull rem = n%ten;
            vc1.push_back(rem);
            rem+=carry;
            n = n/10;
            carry=0;
            if(rem>=5){
                vc.push_back(0);
                carry =1;
            }
            else{
                vc.push_back(rem);
            }
        }
        if(carry==1) vc.push_back(1);

        reverse(vc.begin(), vc.end());
        reverse(vc1.begin(), vc1.end());

        for(auto it:vc1){
            cout<<it;
        }cout<<endl;


}
void solve1()
{
    ull n, ten=10; cin>>n;
    vector<ull> vc,vc1;
    while(n){
    ull rem = n%ten;
    vc1.push_back(rem);
    n = n/10;
    }

    reverse(vc1.begin(), vc1.end());

    for(auto it:vc1){
        cout<<it;
    }cout<<endl;


}


//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       solve1();


    }
    return 0;
}
**/
