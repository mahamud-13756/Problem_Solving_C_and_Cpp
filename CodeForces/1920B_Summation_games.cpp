//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1920/B
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|

#include<bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k, x;
        cin >> n >> k >> x;
        int sz = n+x+1;
        vector<int> vc(sz,0), vc2(sz);

        for (int i=x+1; i<sz; ++i)
            cin >> vc[i];

        sort(vc.begin(), vc.end());
        ll sum=0;
        for (int i = 0; i<sz; ++i) {
            sum += vc[i];
            vc2[i] = sum;
        }

//        for(auto it:vc2){
//            cout<<it<<" ";
//        }
//        cout<<endl;

        int as, mx = INT_MIN;
        int index = n+x;
        for (int i = 0; i <=k; ++i) {
            int suf = index-x-i;
            int pref = vc2[index-i] - vc2[suf];
            int as = vc2[suf] - pref;
            //cout<<as<<" ";
            mx = max(mx,as);

        }
        cout<<mx<<endl;
    }
    return 0;
}
