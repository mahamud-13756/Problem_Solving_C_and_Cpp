//https://codeforces.com/problemset/problem/1913/A
//submitted 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ab, s1, s2;
        cin >> ab;

        s1.push_back(ab[0]);
        int j, c = 0;

        for (int i = 1; i < ab.size(); ++i)
        {
            if (ab[i] == '0')
            {
                s1.push_back(ab[i]);
            }
            else
            {
                //s1.push_back(ab[i]);
                c++;
                j = i;
                break;
            }
        }

        if (c > 0)
        {
            for (int i = j; i < ab.size(); ++i)
            {
                s2.push_back(ab[i]);
            }
        }
        else
        {
            cout << "-1\n";
            continue;
        }

        int x = stoi(s1);
        int y = stoi(s2);

        if (x < y)
            cout << x << " " << y << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}
