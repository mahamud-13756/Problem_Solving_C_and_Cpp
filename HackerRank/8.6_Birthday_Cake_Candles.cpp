//https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long arr[n],tallest=0,Count=0;

    for(long i=0; i<n; i++){
        cin>>arr[i];
        if(tallest<arr[i]){
            tallest=arr[i];
        }

    }

    for(long i=0; i<n; i++){
        if(tallest==arr[i]){
            Count++;
        }

    }
    cout<<Count<<endl;


    return 0;
}
