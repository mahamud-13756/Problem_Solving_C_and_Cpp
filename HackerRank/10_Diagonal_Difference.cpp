// https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int matrix[n][n],SumOfDiagonal1=0,SumOfDiagonal2=0,DiagonalDeference;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
               SumOfDiagonal1+=matrix[i][j];
            }
            if(i==n-j-1){
                SumOfDiagonal2+=matrix[i][j];
            }
        }
    }

//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            if(i==n-j-1){
//                SumOfDiagonal2+=matrix[i][j];
//            }
//        }
//    }




    DiagonalDeference=abs(SumOfDiagonal1-SumOfDiagonal2);

    cout<<DiagonalDeference<<endl;


    return 0;



}
