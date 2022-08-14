#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,i,j,len,Count=0;
    string s;
    cin>>s;

    //for(len=0; s[len]; len++);
    len=s.size();
    cout<<"Input string length: "<<len<<endl;

    for(i=0; i<len; i++){
        a=0;
        for(j=0; j<i; j++){
            if(s[i]==s[j]){
                a=1;
                break;
            }

        }
        if(a==0){
            cout<<s[i];
            Count++;
        }
    }
    cout<<endl<<"Unique string length: "<<Count<<endl;;



    return 0;
}
