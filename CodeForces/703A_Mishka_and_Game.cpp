//https://codeforces.com/problemset/problem/703/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2],s=0,c=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin>>a[i][j];

    }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            if(a[i][0]>a[i][1]){
                s++;
            }
            if(a[i][0]<a[i][1]){
                c++;
            }

//            s+=a[i][0];
//            c+=a[i][1];

    }
    }

    if(s>c){
        cout<<"Mishka"<<endl;
    }
    else if(s<c){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }


    return 0;
}
