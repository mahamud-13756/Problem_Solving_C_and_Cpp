#include<iostream>
using namespace std;

int main()
{

    float a,b,c;
    cout <<"Enter 3 number: \n";
    cin>>a>>b>>c;

    if(a>b){

        if(a>c){
            cout << a;
        }
        else{
            cout<<c;
        }
    }

    else{


        if(b>c){
            cout <<b;

        }
        else{
            cout <<c;
        }
    }




    return 0;
}
