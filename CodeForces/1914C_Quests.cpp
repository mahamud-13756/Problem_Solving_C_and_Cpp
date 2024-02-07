//https://codeforces.com/contest/1914/problem/C
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int ad=a[0],j=0;
        //k--;
        while(--k){

            if(j=0){
                if(b[j]<=a[j+1]) ad+=a[j+1];
                else ad+=b[j];
            }
            else{

                if(j+1>=n){ ad+=b[j];
                 }
                if(b[j]<a[j+1]) ad+=a[j+1];
                else if(b[j]==a[j+1]){
                    if(b[j-1]>b[j]) ad+=b[j-1];
                    else ad+=a[j+1];
                }
                else{
                    ad+=b[j];
                }


            }

            j++;


        }
        cout<<ad<<"\n";
        ad=a[0];


    }


    return 0;
}
