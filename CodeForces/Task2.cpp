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
    int len=c.size(), as=0,j=0,a=0,b=0;
    //cout<<len<<endl;

    for(int i=0; i<len; i++){

        as=(int) c[i];
        //cout<<as<<endl;

        if(as%2!=0 && c[i]==s[j]){

            j++;
//            cout<<"M J"<<endl;
//            cout<<endl;

        }
        else if(as%2==0 && c[i]==s[j]){


//            cout<<"M"<<endl;
//            cout<<endl;
            if(c[i]!=c[i+1]){
                j++;
            }
        }
        else{
            b=1;
        }
      }



    if(b==0){
        cout<<"Match"<<endl;
    }

    if(b==1){
        cout<<"Does not Match"<<endl;
    }






    return 0;
}


