//https://codeforces.com/problemset/problem/266/A
//submitted 800

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
        if(c[i]==c[i+1]){
            cnt++;
        }

    }


    cout<<cnt<<endl;



    return 0;
}
