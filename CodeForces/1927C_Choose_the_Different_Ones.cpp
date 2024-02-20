//https://codeforces.com/contest/1927/problem/C
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long
#define py cout<<"YES\n";
#define pn cout<<"NO\n";

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        unordered_map<int, int> mp1,mp2;
        for(int i=0; i<n; ++i) {cin>>a[i]; mp1[a[i]]++;}
        for(int i=0; i<m; ++i) {cin>>b[i]; mp2[b[i]]++;}

        int x=0,y=0,chk;
        for(int i=1; i<=k; ++i)
        {
            chk=0;
            if(mp1[i]>0 && mp2[i]>0){x++; y++;}
            else if(mp1[i]>0){x++;}
            else if(mp2[i]>0){y++;}
            else {chk=1; break;}
        }

        //cout<<x<<y;

        if(chk==0){
            if((x>=(k/2)) && (y>=(k/2))) py
            else pn
        }else pn

    }


    return 0;
}






/*
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
*/
