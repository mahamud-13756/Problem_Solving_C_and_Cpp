/*
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
//  if(a%2==0 && a>2)
    if(a%2==0 && a!=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
//  if(a%2==0 && a>2)
    if(a%2==1){
        cout<<"No"<<endl;
    }
    else{
        if(a==2)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}





