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
        for(int i=0; i<n; ++i) cin>>a[i];
        for(int i=0; i<n; ++i) cin>>b[i];

        int ad_a=0;
        int max_b=0;
        int max_ans=0;
        for(int i=0; i<min(n,k);++i){
            max_b = max(max_b,b[i]);
            ad_a+=a[i];
            int remain=k-i-1;
            max_ans = max(max_ans, ad_a+(max_b*remain));
        }

        cout<<max_ans<<"\n";


    }
    return 0;
}








/* // Wrong answer in taste case 2

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        ll adl=0,z=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(z<k){
               adl=adl+a[i];
               z++;
            }

        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
            if(z<k){
               adl=adl+b[i];
               z++;
            }
        }
        //inpu neya ses and linear add kora ses
        ll ad, j=0;
        //cout<<ad<<endl;
        ad=a[j];
        //k--;
        while(--k){

            if(j==0){
                if(b[j]<=a[j+1]){ad+=a[j+1]; j++; }
                else ad+=b[j];
            }
            else{

                if(j==n-1){ ad+=b[j];
                 }
                 else{
                    if(b[j]<a[j+1] )
                    {
                        if(b[j-1]>a[j+1]) ad+=b[j-1];
                        else
                        {
                            ad+=a[j+1];
                            j++;
                        }

                    }
                    else if(b[j]==a[j+1])
                    {
                        if(b[j-1]>b[j]) ad+=b[j-1];
                        else
                        {
                            ad+=a[j+1];
                            j++;
                        }
                    }
                    else
                    {
                        ad+=b[j];
                    }
                 }

            }

            //j++;


        }

        //cout<<adl<<" "<<ad<<"\n";
        ll st=max(ad,adl);
        cout<<st<<"\n";
        //ad=a[0];


    }


    return 0;
}
*/
