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


//----int main()----------------------------------------------------
const ll N=2e5+1;
int main()
{
    int i=1;
    vector<ll> vc(N);
    while(i!=N){

        vc[i]=vc[i-1]+sumOfDigits(i);
        i++;
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n; cin>>n;

        cout<<vc[n]<<endl;
    }
    return 0;
}
