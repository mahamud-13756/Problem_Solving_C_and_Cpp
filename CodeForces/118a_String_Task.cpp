// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;



    return 0;
}
