// https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,a,sum=0,b,c;
    cin>>k>>n>>w;

    for(int i=1; i<w+1; i++){

        a=k*i;
        sum+=a;
    }
    //cout<<sum;
    b=(n-sum);
    //c=abs(b);

    if(b<0){
        cout<<abs(b)<<endl;

    }
    else{
        cout<<"0"<<endl;
    }





    return 0;
}
