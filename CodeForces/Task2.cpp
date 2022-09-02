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
    int len=c.size(), as=0,j=0,a=0,b=0,check=1,k=0,d=1;
    int arr[10];


    for(int i=0; i<len; i++){

        as=(int) c[i];
        //cout<<as<<endl;

        if(as%2!=0 && c[i]==s[j] || as%2!=0 && c[i]==s[j+1]){



            j++;
//            cout<<"M J"<<endl;
//            cout<<endl;

        }
        else if(as%2==0 && c[i]==s[j]){

            if(c[i]==c[i+1]){
                check++;

                if(c[i+1]!=c[i+2]){
                    arr[k]=check;
                    k++;

                }


            }
//            cout<<"M"<<endl;
//            cout<<endl;
            if(c[i]!=c[i+1]){
                j++;


            }
        }
        else{
            b=1;
            break;
        }

        if(k>0){
            if(arr[k]==arr[k+1]){
                d++;
            }
            else{
                d=0;
                break;

            }
        }

      }



    if(b==0 || d>1 ){
        cout<<"Match"<<endl;
    }


   // if(b==1 || d==0)
    else{
        cout<<"Does not Match"<<endl;
    }









    return 0;
}


