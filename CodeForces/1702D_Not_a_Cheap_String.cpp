//https://codeforces.com/problemset/problem/1702/D
//submitted 1000
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int p;
        cin>>p;
        int z=s.size();
        pair<char, int> pr[z];
        for(int i=0; i<z; ++i)
        {
            pr[i].first=s[i];
            pr[i].second=i+1;
        }

        ll ad=0;
        sort(pr, pr + z);
        int j=0;

        int st1=0,st2;

        while (z--)
        {
            st1 += (pr[j].first - 'a' + 1); // Corrected the index and added 1 for 'a'

            if (st1 > p)
            {
                st2 = j;
                break;
            }

            ++j; // Increment the index
        }

// Sort the array based on the second value of each pair
        sort(pr, pr + st2, [](const auto& lhs, const auto& rhs)
        {
            return lhs.second < rhs.second;
        });

// Print the sorted array
        for (int i = 0; i < st2; ++i)
        {
            cout<< pr[i].first<<"-"<< pr[i].second<<endl;
        }
        cout<<endl;

    }
    return 0;
}
