//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/problemset/problem/1800/B
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
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;

        map<char, int> freq;

        for(char ch : s) freq[ch]++;
        ll output=0;
        for(char chr='a'; chr<='z'; ++chr){
            int m=min(freq[chr], freq[chr-32]);
            output+=m;

            freq[chr]-=m;
            freq[chr-32]-=m;
        }

        for(char chr='a'; chr<='z';++chr){
            int mx=max(freq[chr], freq[chr-32]);
            int st=min(k, (mx/2));
            output+=st;
            k-=st;
        }

        cout<<output<<endl;



    }
    return 0;
}
