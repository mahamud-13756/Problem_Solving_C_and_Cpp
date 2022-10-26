//https://codeforces.com/problemset/problem/58/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,h="hello";
    cin>>s;

    int n=s.size(),k=0,c=0;

    if(n>=5){
        for(int i=0; i<n; i++){
            if(h[k]==s[i]){
                k++;
                c++;
            }

    }
    }
    else{
        cout<<"NO";
    }

    if(c==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}
