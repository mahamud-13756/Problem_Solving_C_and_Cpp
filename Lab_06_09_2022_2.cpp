#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int chk=0;

    for(int i=0; i<s.size();i++){

        if(chk==0 && (s[i]=='_' || (s[0]>='A' && s[0]<='z'))){
            chk++;
        }
        else if(chk>=1 && (s[i]==' ' || (s[i]>='A' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))){
            chk++;
        }
        else{
            chk=0;
            break;
        }



    }

    if(chk>1){
            cout<<"valid"<<endl;
        }
        else{
            cout<<"invalid"<<endl;
        }

    return 0;
}
