//https://codeforces.com/problemset/problem/208/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    int flag=1;

    for(int i=0; i<s.size(); ++i){
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i+=2;
            if(flag==0) cout<<" ";
            //cout<<" "
        }
        else{
            flag=0;
            cout<<s[i];
        }
    }

    return 0;
}
