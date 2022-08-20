//https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int Size1,Size2=3, c1=0, c2=0, c3=0;
    cin>>Size1;

    int a[Size1][Size2];

    for(int i=0; i<Size1; i++){
        for(int j=0; j<Size2; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<Size1; i++){
        for(int j=0; j<Size2; j++){
            //cout<<a[i][j]<<" ";
            //sum+=a[i][j];
            if(j==0){
                c1+= a[i][j];
            }
            if(j==1){
                c2+= a[i][j];
            }
            if(j==2){
                c3+= a[i][j];
            }

        }
        //cout<<endl;
    }

    //cout<<sum;

    if(c1==0 && c2==0 && c3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }



    return 0;
}
