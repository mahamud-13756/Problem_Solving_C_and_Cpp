#include<iostream>

using namespace std;
int main()
{
    string s;
    int r=0,p=0;
    getline(cin,s,'+');
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='/'&&s[i+1]=='/')
        {
            r=1;
            continue;
        }
        if(r==1)
        {
            if(s[i]=='\n')
            {
                r=0;
                cout<<s[i];
            }
            continue;
        }
        if(s[i]=='/'&&s[i+1]=='*')
        {
            p=1;
            continue;
        }
        if(p==1)
        {
            if(s[i]=='*'&&s[i+1]=='/')
            {
                p=0;
                i++;
            }
            continue;
        }
        cout<<s[i];
    }
}
