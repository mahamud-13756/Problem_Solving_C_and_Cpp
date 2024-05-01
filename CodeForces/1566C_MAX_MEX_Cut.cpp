//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1566/problem/C
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating 900, Ansi-style
    // status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string s1,s2; cin>>s1>>s2;
        int sum=0;
        for(int i=0; i<n; ++i)
        {
            if(s1[i]!=s2[i]) sum+=2;
            else if(s1[i]=='1' && s2[i]=='1'){
                if(s1[i+1]=='0' && s2[i+1]=='0'){
                    sum+=2;
                    ++i;
                }
            }
            else if(s1[i]=='0' && s2[i]=='0'){
                if(s1[i+1]=='1' && s2[i+1]=='1'){
                    sum+=2;
                    ++i;
                }
                else sum+=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
