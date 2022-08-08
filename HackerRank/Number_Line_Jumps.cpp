#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x1,v1,value1=x1;
    int x2,v2,value2=x2;

    cin>>x1>>v1>>x2>>v2;

    if(x1>x2 && v1>v2 || x2>x1 && v2>v1){
        cout<<"NO"<<endl;
    }
    else if(x1<x2 && v1 > v2) {
        while(x1<=x2) {
            if(x1==x2) {
                cout<<"YES"<<endl;
                break;
            }
            else {
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
        }
        if ( x1!= x2 ) {
            cout<<"NO"<<endl;
        }
    }
    else if(x1>x2 && v1 < v2) {
        while(x1>=x2) {
            if(x1==x2) {
                cout<<"YES"<<endl;
                break;
            }
            else {
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
        }
        if ( x1!= x2 ) {
            cout<<"NO"<<endl;
        }
    }

    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
