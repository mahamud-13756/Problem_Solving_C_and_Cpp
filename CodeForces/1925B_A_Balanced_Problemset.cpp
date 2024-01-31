//https://codeforces.com/contest/1925/problem/B
//submitted

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
        int n,k,st,stt;
        cin>>n>>k;

        if(n%k==0) cout<<n/k<<"\n";
        else
        {
            st=n/k;
            if(n%st==0) cout<< st<<"\n";
            else{
                while(st){
                    if(n%st==0){
                        stt=st;
                        break;
                    }
                    st--;
                }
                cout<< st<<"\n";
            }
         }


    }


    return 0;
}


