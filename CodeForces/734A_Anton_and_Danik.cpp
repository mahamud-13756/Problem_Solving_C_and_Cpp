// https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,d=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }

    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a<d){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
