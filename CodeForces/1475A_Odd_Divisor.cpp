//============================================================================
    // problem link : https://codeforces.com/problemset/problem/1475/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//============================================================================



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;

//        if(n % 2 != 0) {
//            cout << "YES\n";
//        } else {
            // Check if n is divisible by 2 multiple times
            while(n % 2 == 0) {
                n /= 2;
            }

            // If n becomes 1, it was a power of 2, so it has no odd divisors
            if(n == 1) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
 //       }
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        long long int n; cin>>n;
        int flag=0;

        if(n%2!=0) cout<<"YES\n";
        else{
            for(long long int i=3; i<n; i+=2){
                if(n%i==0) {flag=1; break;}
            }
            if(flag) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
*/
