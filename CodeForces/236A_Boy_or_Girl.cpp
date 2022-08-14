//https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,i,j,cnt=0,a=0;
    string s;
    char f[100];
    cin>> s;
    for(len=1; s[len]; len++);
    //cout<<len;

    for(i=0;i<len; i++){
        cnt=0;

        for(j=0; j<i; j++){
            if(s[i]==s[j]){
                cnt=1;
                break;
            }
        }
        if(cnt==0){


            a++;
        }

    }
    //cout<<a;


    if(a%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }



    return 0;
}
