//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1722/problem/C
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
        map<string,int> freq;

        vector<string> a[3];
        for(int i=0;i<3;i++){
            a[i].resize(n);
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                freq[a[i][j]]++;
            }
        }
        int p[3]={0};
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                if(freq[a[i][j]]==1){
                    p[i]+=3;
                }
                else if(freq[a[i][j]]==2){
                    p[i]+=1;
                }
            }
        }

        cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;

    }
    return 0;
}
