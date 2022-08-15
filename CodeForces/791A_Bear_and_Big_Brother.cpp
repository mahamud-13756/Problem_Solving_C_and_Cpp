//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=a;
    d=b;
    for(int i=1; i<10 ;i++){

       c=(c*3);

       d=(d*2);

       if(c>d){
        cout<<i<<endl;
        break;
       }
    }



    return 0;
}
