//https://vjudge.net/contest/535304#problem/B

#include<bits//stdc++.h>
using namespace std;

int main()
{
    string s[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        cout<<s[i]<<": F"<<endl;
    }

    return 0;
}
