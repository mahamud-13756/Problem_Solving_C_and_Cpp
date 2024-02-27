#include<bits/stdc++.h>
using namespace std;

void input(int *arr, int n)
{
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }
}

void display(int *arr, int n)
{
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteByIndex(int *arr, int pos, int n)
{
    for(int i=pos-1; i<n; ++i){
        arr[i]=arr[i+1];
    }
    
}



int main()
{
    cout<<"Number of elements: ";
    int n; cin>>n;
    int arr[100];
    cout<<"Enter each elements: ";
    input(arr,n);
    cout<<"Elements that you enter: ";
    display(arr, n);

    //cout<<"Enter the value that you insert: ";
    //int inVal; cin>>inVal;

    cout<<"Enter the Position which value you delete: ";
    int pos; cin>>pos;

    deleteByIndex(arr, pos,n);

    display(arr, n-1);





    return 0;
}