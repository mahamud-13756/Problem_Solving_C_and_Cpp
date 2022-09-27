// https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l=0,u=0,a;
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        a=((int)(s[i]));
        if(a<97)
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u>l)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                s[i]=s[i]-32;
        }
    }
    else if(u<=l)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
    }
    for(int i=0; i<s.size(); i++)
        cout<<s[i];



    return 0;
}
