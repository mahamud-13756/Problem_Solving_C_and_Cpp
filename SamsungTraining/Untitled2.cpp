#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int array[a];
    for(int i=0; i<a; i++){
        cin>>array[i];
    }
    sort(array,array+a);
    reverse(array,array+a);
    for(int i=0; i<a; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

