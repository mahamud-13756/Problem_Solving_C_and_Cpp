//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1946/problem/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long mod = 1e9 + 7;
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
// Function to compute power of x raised to the power y modulo mod
long long power(long long x, long long y, long long mod) {
    long long result = 1;
    x %= mod;
    while (y > 0) {
        if (y & 1)
            result = (result * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return result;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        long long tSum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            tSum += a[i] % mod;
            tSum %= mod;
        }

        // Find Maximum sub array sum with kadanes
        long long sum = 0, ans = 0;
        for(int i = 0; i < n; ++i) {
            sum += a[i];

            if(sum<0) sum=0;
            ans =max(ans,sum);
        }

        long long exist = ((tSum - ans)%mod+mod)%mod;
        ans %= mod;
        cout<<(exist%mod+((powermod(2,k,mod)%mod*ans%mod)%mod)%mod)%mod<<endl;
    }
    return 0;
}
