//https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include<iostream>
//#include <iomanip>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    double count_zero=0,count_positive=0,count_negative;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            count_positive++;
        }
        if(arr[i]<0){
            count_negative++;
        }
        if(arr[i]==0){
            count_zero++;
        }
    }

//    cout<<setprecision(6)<<count_positive/n<<endl;
//    cout<<count_negative/n<<endl;
//    cout<<count_zero/n<<endl;

    printf("%.6lf\n",count_positive/n);
    printf("%.6lf\n",count_negative/n);
    printf("%.6lf\n",count_zero/n);



    return 0;



}
