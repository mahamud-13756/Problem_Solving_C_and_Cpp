#include<iostream>
using namespace std;

int main()
{
    int Array[5],total_sum=0,Esum=0;

    for(int i=0; i<5; i++){
        cin>>Array[i];

    }

    for(int i=0; i<5; i++){
        total_sum=total_sum+Array[i];


    }
    cout<<"Total sum: "<<total_sum<<endl;

    for(int i=0; i<5; i++){
        if(Array[i]==Array[i]){
            Esum=total_sum-Array[i];
            cout<<"Esum "<<i<<": "<<Esum<<endl;
        }

    }



    return 0;
}
