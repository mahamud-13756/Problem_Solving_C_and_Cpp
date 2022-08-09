//https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>


using namespace std;


int main()
{
    string s1,s2;

    cin>>s1>>s2;

    for(int i=0;i<s1.length(); i++){
        if(s1[i]<='a'){
            s1[i]=tolower(s1[i]);

        }

        if(s2[i]<='a'){
            s2[i]=tolower(s2[i]);

        }
    }


    if(s1==s2){
        cout<<"0"<<endl;
    }
    else if(s1>s2){
        cout<<"1"<<endl;
    }
    if(s1<s2){
        cout<<"-1"<<endl;
    }

    return 0;
}
