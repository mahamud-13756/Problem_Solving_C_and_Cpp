//https://vjudge.net/contest/535304#problem/A

#include<bits//stdc++.h>
using namespace std;

int main()
{
    int v,a,r,p,h,sum1,sum2,sum3,sum4;
    cin>>v>>a>>r>>p>>h;

    sum1= v+a+r;
    sum2= v+a+p;
    sum3= a+r+p;
    sum4= v+r+p;

    if(sum1>=h || sum2>=h || sum3>=h || sum4>=h){
        cout<<"WAW"<<endl;
    }
    else{
        cout<<"AWW"<<endl;
    }

    return 0;
}
