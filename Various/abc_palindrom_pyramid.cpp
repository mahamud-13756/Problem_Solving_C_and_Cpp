#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Total number of triangle: \n";
    int tc; cin>>tc;
    while(tc--)
    {
        cout<<"Total row of this triangle: \n";
        int trow; cin>>trow;

        for(int i=0; i<trow; ++i){
            for(int s=0; s<trow-i-1; ++s) cout<<"  ";// two space
            
            for(int j=0; j<=i; ++j){
                cout<<char(65+j)<<" ";// single space
            }


            for(int r=i-1; r>=0; --r){//reverse 
                cout<<char(65+r)<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}