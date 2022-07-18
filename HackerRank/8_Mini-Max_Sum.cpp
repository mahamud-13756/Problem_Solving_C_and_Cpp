// https://www.hackerrank.com/challenges/mini-max-sum/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

#include<iostream>
using namespace std;

int main()
{
    long long Array[5],total_sum=0,Esum=0,MIN=LONG_MIN,MAX=LONG_MAX;


    for(int i=0; i<5; i++){
        cin>>Array[i];
        total_sum=total_sum+Array[i];

    }





    for(int i=0; i<5; i++){
        Esum=total_sum-Array[i];
        MIN=min(MIN,Esum);
        MAX=max(MAX,Esum);

    }

    cout<<MIN<<" "<<MAX<<endl;



    return 0;
}
