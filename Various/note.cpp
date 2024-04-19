#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string s; cin >>s;
    int pos = s.size();
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] - '0' >= 5)
        {
            if(i == 0) {
                s = '1' + s;
                pos = i + 1;
            }
            else {
                s[i - 1]++;
                pos = i;
            }
        }
    }
    for (int j = pos; j < s.size(); j++)
        s[j] = '0';
    cout << s << endl;
    }
    return 0;
}
