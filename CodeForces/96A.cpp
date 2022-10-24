#include<bits/stdc++.h>
using namespace std;


int main()
{
    int count0=0,count1=0,b=0;
    string s;
    cin>>s;//100000000110000000

    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            count0++;
            count1=0;
            if(count0>=7){
                b=1;
            }

        }

        if(s[i]=='1'){
            count1++;
            count0=0;
            if(count1>=7){
                b=1;
            }

        }
    }
    if(b==1 || b==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
