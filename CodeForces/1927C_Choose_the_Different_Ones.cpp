//https://codeforces.com/contest/1927/problem/C
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,cn=0,cn2=0;
        cin>>n>>m>>k;

        set<int> st1;
        set<int> st2;

        for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        st1.insert(element);
        }

        for (int i = 0; i < m; ++i) {
        int element;
        cin >> element;
        st2.insert(element);
        }

        //int st=(k/2);

        auto it = st1.upper_bound(k);
        int cnt = distance(st1.begin(), it);

        auto it2 = st2.upper_bound(k);
        int cnt2 = distance(st2.begin(), it2);

//        cout<<"st1"<<cnt<<"\n";
//        cout<<"st2"<<cnt2<<"\n";

        if(cnt>=(k/2) && cnt2>=(k/2)) cn++;

    auto first1 = st1.begin();
    auto last1 = next(first1, k);

    auto first2 = st2.begin();
    auto last2 = next(first2, k);

    // Create a vector to store the first k elements from both sets
    vector<int> vc;
    merge(first1, last1, first2, last2, std::back_inserter(vc));
    sort(vc.begin(), vc.end());





        if(cn>0){
            for(int i=0; i<k; i++)
            {
                if(i+1==vc[i]) cn2++;
            }
            if(cn2>=k) cout<<"YES\n";
                else cout<<"NO\n";
        }
        else cout<<"NO\n";

    }


    return 0;
}
