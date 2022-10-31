// Decimal to binary

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;

    for( i=31; i>0; i--){
        if((n>>i)&1){
            break;
        }
    }

    for( ; i>=0; i--){
        cout<<((n>>i)&1);
    }


    return 0;
}
