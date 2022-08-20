//https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int Size,sum=0;
    cin>>Size;

    int a[Size][Size];

    for(int i=0; i<Size; i++){
        for(int j=0; j<Size; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<Size; i++){
        for(int j=0; j<Size; j++){
            //cout<<a[i][j]<<" ";
            sum+=a[i][j];
        }
        //cout<<endl;
    }

    //cout<<sum;

    if(sum==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }



    return 0;
}
