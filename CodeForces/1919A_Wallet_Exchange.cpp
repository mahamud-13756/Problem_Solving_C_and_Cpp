//https://codeforces.com/problemset/problem/1919/A
//submitted 800
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a ,b;
        cin>>a>>b;

        if(a==b) cout<<"Bob\n";
        else{
            if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)) cout<<"Bob\n";
            else cout<<"Alice\n";

        }
    }

    return 0;
}
