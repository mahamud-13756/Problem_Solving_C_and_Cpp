//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/contest/1899/problem/B
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




/*----Ended Needed Function-----------------------------------------------*/









//----Used Function in this Program---------------------------------

vector<int> getDivisors(int num) {
    std::vector<int> divisors;

    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    return divisors;
}

//----int main()----------------------------------------------------
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<ll> vc(n);
        for(int i=0; i<n; ++i) cin>>vc[i];

        vector<int> divisors = getDivisors(n);


        ll tmax=0;
        for(auto divi: divisors)
        {
                ll mx=0, mn=LLONG_MAX,dif;
                ll  sum=0,cnt=0;
                for(int j=0; j<n; ++j)
                {
                    sum+=vc[j];
                    cnt++;

                    if(cnt==divi){
                        mx = max(mx,sum);
                        mn = min(mn,sum);
                        cnt=0; sum=0;
                    }
                }
                //dif=abs;
                tmax = max(tmax,(mx-mn));
                dif=0;

        }
        cout<<tmax<<endl;
    }
    return 0;
}
