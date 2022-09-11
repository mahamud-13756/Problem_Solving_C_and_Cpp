#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=28; i>0; i-=4)
        if((n>>i)&15)
            break;
    for(; i>=0; i-=4)
        cout<<((n>>i)&15);
    return 0;
}
