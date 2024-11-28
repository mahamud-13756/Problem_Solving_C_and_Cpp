#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s; cin>>s;
    int cntl=0, cntu=0;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]>='A' && s[i]<='Z') cntu++;
        else cntl++;
    }

    if(cntl>=cntu)
    {
        for(char ch:s) cout<<(char)tolower(ch);
        cout<<endl;
    }
    else{
        {
            for(char ch:s) cout<<(char)toupper(ch);
            cout<<endl;
        }
    }
}