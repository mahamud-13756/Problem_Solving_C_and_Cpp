/*
Name: Md. Mahamud Mredha
Pattern : MAH*AMUD*
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c, s="MAHAMUD";

    cin>>c;
    int len=c.size(), as=0,j=0,a=0;
    //cout<<len<<endl;

    for(int i=0; i<len; i++){
        a=0;
        as=(int) c[i];
       // cout<<as<<endl;

        if(as%2!=0 && c[i]==s[j]){
            a=1;
            j++;
//            cout<<"M J"<<endl;
//            cout<<endl;

        }
        if(as%2==0 && c[i]==s[j]){
            a=1;

//            cout<<"M"<<endl;
//            cout<<endl;
            if(c[i]!=c[i+1]){
                j++;
            }
        }
//        else{
//            //cout<<"Does not Match"<<endl;
//            a=0;
//        }

    }

    if(a==1){
        cout<<"Match"<<endl;
    }

    if(a==0){
        cout<<"Does not Match"<<endl;
    }






    return 0;
}


