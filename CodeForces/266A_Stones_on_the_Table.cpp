//https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,cnt=0;
    cin>>a;

    char c[a];
    for(int i=0; i<a; i++){
        cin>>c[i];

    }
    //RRBRRRB
    for(int i=0; i<a; i++){

        for(int j=i+1; j<i+2; j++){
            if(c[i]==c[j]){
                cnt++;
                break;
            }

        }
    }

    cout<<cnt<<endl;



    return 0;
}
