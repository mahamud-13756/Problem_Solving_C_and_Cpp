//https://codeforces.com/problemset/problem/677/A


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,h,c=0;
    cin>>n>>h;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>h){
            c++;
        }
    }
    cout<<n+c<<endl;


    return 0;
}
