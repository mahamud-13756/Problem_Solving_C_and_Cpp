//https://codeforces.com/contest/1915/problem/E
// 1300 submitted
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll addEven=0,addOdd=0,bad=0,bad1=0,fl=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==0) addOdd+=arr[i];
            else addEven+=arr[i];
        }
        //cout<<addEven<<"\n"<<addOdd;
        ll dif=abs(addEven-addOdd);
        if(dif==0) cout<<"YES\n";
        else
        {
            for(int i=0; i<=n/2; i++)
            {
                int j=n-1;
                bad1+=arr[j];
                bad+=arr[i];
                if(bad==dif || bad1==dif){fl++; cout<<"YES\n";}


                --j;

            }
            if(fl==0) cout<<"NO\n";

        }





    }


    return 0;
}
