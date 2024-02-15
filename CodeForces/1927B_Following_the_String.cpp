//https://codeforces.com/contest/1927/problem/B
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int s[n]; for(int i=0;i<n;++i) cin>>s[i];
        vector<int> vc(26);
        string store;
        for(int i=0; i<n; ++i){
            for(int j=0; j<26; ++j){
                if(vc[j]==s[i]){
                    store.push_back('a'+j);
                    vc[j]++;
                    break;
                }
            }
        }
        cout<<store<<endl;

    }

    return 0;
}








/*//another solution
int main()
{
    int t;
    cin>>t;
    string str= "abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        int n;
        cin>>n;
        map<char, int> mp;

        for(int i=0; i<str.size(); ++i) mp[str[i]]=0;



        vector<int> vc(n);
        for(int i=0; i<n; ++i)
        {
            cin>>vc[i];
            for(auto it:mp){
               if(it.second==vc[i]){
                   cout<<it.first;
                   mp[it.first]++;//ekhane value barbe like a[i]++
                   break;
               }
            }

        }
        cout<<endl;

    }
    return 0;
}
*/
