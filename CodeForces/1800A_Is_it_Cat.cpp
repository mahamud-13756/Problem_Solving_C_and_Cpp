//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : https://codeforces.com/contest/1800/problem/A
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
        string s; cin>>s;
        //mmmmmmeeeeeOOow

        vector<char> vc,vc2;
        for(int i=0; i<n; ++i)
        {
            //A-->65 and a-->97
           if(s[i]<97){
                vc.push_back(s[i]+32);
           }else{
               vc.push_back(s[i]);
           }
        }

        string s2="meow";
        for(int i=0; i<vc.size()-1; ++i)
        {
            if(vc[i]==vc[i+1]){

            }else{
                vc2.push_back(vc[i]);
            }
        }
        vc2.push_back(vc[vc.size()-1]);
        //string s3="";
        int j=0;

        if(vc2.size()==4){
            for(int i=0; i<vc2.size(); ++i)
            {
                //cout<<vc2[i];
                if(vc2[i]==s2[i]){
                    ++j;
                }
            }

            if(j==4) cout<<"YES\n";
            else  cout<<"NO\n";

        }else  cout<<"NO\n";





    }


}
