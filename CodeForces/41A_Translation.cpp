//  https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>
using namespace std;


int main()
{


//    // revers
//    for(int i=0; i<n ; i++){
//        ne[i]=s[n-i-1];
//
//    }


string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

