
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i;
    cin>>n;
    for(i=30; i>0; i-=3){
         if((n>>i)&7)
            break;
    }

    for(; i>=0; i-=3){
        cout<<((n>>i)&7);
    }


    return 0;
}
