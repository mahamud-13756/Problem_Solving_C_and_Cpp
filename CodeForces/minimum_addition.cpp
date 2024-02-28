#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        ll nn=n;
        n = (n+1)/2;
        ll ans = n*(n+1);
        if(nn%2==1)
            ans-=(nn+1)/2;
        // Output the result
        cout << ans << endl;
    }

    return 0;
}
