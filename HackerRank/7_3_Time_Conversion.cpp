//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string time;
    cin>>time;

    int h2=(int)time[0]-'0';
    int h1=(int)time[1]-'0';
    int hh=h2*10+h1;

    if(time[8]=='A'){
        if(hh==12){
            cout<<"00";
            for(int i=2; i<8; i++){
                cout<<time[i];
            }
        }
        else{
            for(int i=0; i<8; i++){
                cout<<time[i];
            }
        }
    }
    else{
         if(hh==12){

            for(int i=0; i<8; i++){
                cout<<time[i];
            }
        }
        else{
            hh=hh+12;
            cout<<hh;
            for(int i=2; i<8; i++){
                cout<<time[i];
            }
        }



    }



    return 0;
}
