//https://codeforces.com/problemset/problem/1912/L
//submitted 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,d=0,index,mo,eo;
    char st;
    cin>>n;
    char  a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    st=a[0];
    for(int i=1; i<n; i++){
        if(st==a[i]){
            c++;//(Total L -1)
            index=i;
        }
        else d++; //(Total O)
    }

    if(c<1 || c>1) {
        cout<<"1\n";

    }
    else{
        if(index<n-1){
            mo=index-c;
            eo=d-mo;
            if(mo!=eo) cout<<index+1<<"\n";
            else cout<<"-1\n";
        }
        else cout<<"-1\n";
    }

    return 0;
}
