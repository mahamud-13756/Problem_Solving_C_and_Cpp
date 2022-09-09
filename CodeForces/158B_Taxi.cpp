//https://codeforces.com/problemset/problem/158/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int a[s],sum=0,d;

    for(int i=0; i<s; i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    //cout<<sum<<endl;

    float g=(float)sum/4;

    cout<<ceil(g);

    return 0;
}

