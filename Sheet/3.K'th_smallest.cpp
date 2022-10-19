//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    //Bubble sort
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(array[j]>=array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }

    }
    }

    for(int j=0; j<n; j++){
        cout<<array[j]<<" ";
    }


    return 0;
}
