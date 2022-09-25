//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,y[],f=1,i,j;
    cin>>n;

    for(int k=0; k<4; k++){
        y[k]=n[k];
    }

    y++;
    for(i=0; i<4; i++){
        for(j=1; j<4; j++){
            if(y[i]==y[j+i]){
                f=0;
                y++;
                break;
            }
            else{

                continue;
            }

    }

    }
    if(f==0){

    }
    else{
        cout<<y;
    }


    return 0;
}
