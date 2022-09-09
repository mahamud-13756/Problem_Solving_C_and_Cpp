//https://codeforces.com/problemset/problem/479/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,m[6];
    cin>>a>>b>>c;

    m[0]=a+b*c;
    m[1]=a*b+c;
    m[2]=a*(b+c);
    m[3]=a*b*c;
    m[4]=(a+b)*c;
    m[5]=a+b+c;



    int i=0, Max=m[i];

    for(i=0; i<6; i++){
        if(m[i]>Max){
            Max=m[i];
        }
    }

    cout<<Max<<endl;





    return 0;
}
