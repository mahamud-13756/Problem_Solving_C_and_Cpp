//https://codeforces.com/contest/1759/problem/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,s,sum=0,su=0,sum1,f=0;
    cin>>t;


    for(int j=0; j<t;j++){
    cin>>m;
    int b[m];
    cin>>s;
    for(int i=0;i<m; i++){
        cin>>b[i];
        sum=sum+b[i];
    }

    sum1=sum+s;
    for(int i=0;i<50; i++){
        su=su+i;

        if(sum1==su){
            f=1;
            break;
        }
        else{
            f=0;
        }

    }

    }


    for(int j=0; j<t;j++){

    if(f==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }






    return 0;
}

/*
5
3 13
3 1 4
1 1
1
3 3
1 4 2
2 1
4 3
5 6
1 2 3 4 5


YES
NO
YES
NO
YES

*/
