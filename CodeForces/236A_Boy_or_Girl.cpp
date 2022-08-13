//https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,i,j,cnt=0,a;
    string s;
    cin>> s;
    for(len=1; s[len]; len++);
    //cout<<len;

    for(i=0; i<len; i++){


        for(j=i+1; j<len; j++){

            if(s[i]==s[j]){
                cnt++;
            }
        }
    }
    a=len-cnt;
    cout<<a<<endl;

//    if(len%2!=0){
//        cout<<"IGNORE HIM!"<<endl;
//    }
//    else{
//        cout<<"CHAT WITH HER!"<<endl;
//    }



    return 0;
}
