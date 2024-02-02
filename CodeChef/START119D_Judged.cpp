//https://www.codechef.com/START119D/problems/ADVITIYA2
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
        int arr[5];
        int c=0;
        for(int i=0; i<5; i++)
        {

            cin>>arr[i];
            if(arr[i]==1) c++;
        }

        if(c>=4) cout<<"YES" <<"\n";
        else cout<< "NO"<<"\n";
        c=0;


    }


    return 0;
}

