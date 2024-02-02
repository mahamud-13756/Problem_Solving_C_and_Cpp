//https://www.codechef.com/START119D/problems/ADVITIYA3
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
        int n,k,co=0;
        vector<int> vc;
        cin>>n>>k;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            if(arr[i]>=k){
               int a=arr[i]%k;
               vc.push_back(a);
               co++;
            }
        }

        sort(vc.begin(), vc.end());

//        for(int i=0; i<vc.size(); i++)
//        {
//            cout<<vc[i]<<" ";
//        }
        if(co>=1){
            cout<<vc[0] <<"\n";
        }
        else {cout<<"-1"<<"\n";}

        co=0;


    }


    return 0;
}

