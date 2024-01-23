#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int hsh[26],st,fall=0;

    for(int i=0; i<26; i++){
        hsh[i]=0;
    }

    for(int i=0; i<26; i++){
        hsh[s[i]-'A']++;
    }

    for(int i=0; i<26; i++){
        if(hsh[i]>0){
            char l=(char)i+'A';
            cout<<i+'A'<<" "<<l<<" "<<hsh[i]<<endl;

        }


    }
    for(int i=0; i<26; i++){
    if((i+'A')%2==0){
            if(st==hsh[i]){
                continue;
            }
            else{
                fall++;
            }
            st=hsh[i];


        }
    }


    if(fall>1){
        cout<<"Not Equal"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }


    return 0;
}
