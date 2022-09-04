#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int hsh[26];

    for(int i=0; i<26; i++){
        hsh[i]=0;
    }

    for(int i=0; i<26; i++){
        hsh[s[i]-'A']++;
    }


    return 0;
}
