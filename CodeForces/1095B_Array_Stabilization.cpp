//https://codeforces.com/problemset/problem/1095/B
//submitted 900
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////


int main() {
    int n;
    cin >> n;

    vector<int> vc(n);
    for (int i = 0; i < n; ++i) {
        cin >> vc[i];
    }
    sort(vc.begin(), vc.end());

    // Display the vector
    //if(n==2) cout<<"0\n";
    int m= min((vc[n - 2] - vc[0]), (vc[n - 1] - vc[1]));
    cout << m<<"\n";

    return 0;
}
