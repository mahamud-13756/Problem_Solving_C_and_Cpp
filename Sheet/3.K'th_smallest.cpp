//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cout<<"Size of Array: ";
    cin>>n;

    cout<<"Array elements: ";
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    cout<<"K'th smallest element: ";
    int k;
    cin>>k;

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

//    for(int j=0; j<n; j++){
//        cout<<array[j]<<" ";
//
//    }
//    cout<<endl;

    for(int j=1; j<=n; j++){

        if(j==k){
            k=j;
            cout<<array[k-1];
            break;
        }

    }





    return 0;
}
