#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        char a[n][n];
        int cnt;
        set<int> st;

        for (int i = 0; i < n; ++i) {
            //string s; cin>>s;
            cnt=0;
            for (int j = 0; j <n; ++j) {
                cin>>a[i][j];
                if (a[i][j] =='1') cnt++;
            }
            if (cnt > 0) st.insert(cnt);
        }

        if (*st.begin()==1) {
            cout<<"TRIANGLE"<< endl;
        } else {
            cout<<"SQUARE"<< endl;
        }
    }
    return 0;
}
