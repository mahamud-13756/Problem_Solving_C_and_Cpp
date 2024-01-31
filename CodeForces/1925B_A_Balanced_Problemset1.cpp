//https://codeforces.com/problemset/problem/1925/B
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
        int x,n;
        cin>>x>>n;

        while(x%n!=0){
            n=((x-1)/(x/n))+1;
        }
        cout<<x/n <<"\n";

    }


    return 0;
}

/*
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

         */
