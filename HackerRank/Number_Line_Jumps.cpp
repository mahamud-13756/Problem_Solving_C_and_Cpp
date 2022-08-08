//https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x1,v1,value1=x1,jump1=0;
    int x2,v2,value2=x2,jump2=0,M=INT_MAX,chk=0;

    cin>>x1>>v1>>x2>>v2;

    if(x1>x2 && v1>v2 || x2>x1 && v2>v1){
        cout<<"NO"<<endl;
    }
    for(int i=0; i<M; i++){
            value1+=value1;
            jump1++;

            value2+=value2;
            jump2++;

            if(value1==value2 && jump1==jump2){
                chk=1;
                break;
            }
        }

    if(chk==1){

        cout<<"YES"<<endl;


    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
