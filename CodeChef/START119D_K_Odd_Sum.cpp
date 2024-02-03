//https://www.codechef.com/START119D/problems/ADVITIYA5
//submitted
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////
bool isOdd(int a)
{
    return (a%2!=0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vc;
        int p=(n-1)-k;
        for(int i=0; i<k; i++)
        {
            int a=i+1;

            vc.push_back(a);

        }
        for(int i=0; i<(n-k); i+=2)
        {
            if(k+i+2<=n)
             vc.push_back((k+i+2));
        }
        for(int i=0; i<(n-k); i+=2)
        {
            if((k-1)+i+2<=n)
             vc.push_back(k-1+i+2);
        }



        for(int i=0; i<n; i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<"\n";
//        for(int i=0; i<n; i++)
//        {
//            if(k%2==0){
//
//            }
//
////            if(k+i<=n-1) cout<< k+2<<" ";
////            else{
////                if(k-1<=n-1) cout<<<<" ";
////            }
//        }





    }


    return 0;
}
