//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/problemset/problem/1922/C
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
        int a[n];
        vector<int> vc,vc1,vc_r;
        for(int i=0; i<n; ++i) cin>>a[i];
        vc1.push_back(INT_MAX);
        for(int i=0; i<n-1; ++i)
        {
            int as = abs(a[i]-a[i+1]);
            vc1.push_back(as);
        }
        vc1.push_back(INT_MAX);
        ll sum;
        vc = vc1;
        //reverse(vc1.begin(), vc1.end());
//        for(auto it :vc){
//            cout<<it<<" ";
//        }cout<<endl;
//        for(auto it :vc1){
//            cout<<it<<" ";
//        }cout<<endl;
        int q; cin>>q;
        while(q--)
        {
            sum=0;
            int x,y; cin>>x>>y;
            ll dis = abs(a[x-1]-a[y-1]);
            if(x<y){
                for(int i=x; i!=y; ++i)
                {
                    if(vc[i-1]>vc[i]){
                        sum+=1;
                    }
                    else{
                        sum+=vc[i];
                    }
                }
            }
            else{

                for(int i=x; i!=y; --i){

                    if(vc[i]>vc[i-1]){
                        sum+=1;
                    }
                    else{
                        sum+=vc[i-1];
                    }
                }
            }


        cout<<min(sum,dis)<<endl;
        }

    }
    return 0;
}
