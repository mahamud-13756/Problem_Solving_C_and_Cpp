// code 2
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int a=0,b=0,c=0,x=0;
    int p=s.size(),i=0;
    if(s[i]=='a'){
        a++;
        while(s[i]=='a')
            i++;
        if(s[i]=='b'){
            b++;
            while(s[i]=='b'){
                i++;
            }
            if(s[i]=='c'){
                c++;
                while(s[i]=='c'&&i!=p){
                    i++;
                }
            }
        }
        if(a==1&&b==1&&c==1)cout<<"a*b+c+"<<endl;
        else cout<<"False"<<endl;
    }
    else if(s[i]=='b'){
        b++;
        while(s[i]=='b')
            i++;
        if(s[i]=='c'){
            c++;
            while(s[i]=='c'&&i!=p)
                i++;
        }
        else if(a==0&&b==1&&c==1)cout<<"a*b+c+"<<endl;
        else cout<<"False"<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
