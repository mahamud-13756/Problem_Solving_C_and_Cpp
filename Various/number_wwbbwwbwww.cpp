#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    
    int first_B=-1,last_B=0;
    for(int i=0; i<n; ++i){
        if(s[i]=='B'){
            if(first_B==-1) first_B=i;
            last_B=i;//protibar B er soman hoilei update hbe.
        }
    }
    cout<<last_B-first_B+1<<"\n";

    return 0;
}