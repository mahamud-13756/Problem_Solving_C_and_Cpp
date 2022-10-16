//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int Max = arr[0];
    int Min = arr[0];

    for(int i=0; i<n; i++){
        if(Max<=arr[i]){
            Max=arr[i];
        }
        if(Min>=arr[i]){
            Min=arr[i];
        }
    }
    cout<<Max<<" "<<Min;

    return 0;
}
