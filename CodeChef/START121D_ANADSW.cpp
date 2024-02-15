//https://www.codechef.com/START121D/problems/ANADSW
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


// stratz = "abcdefghijklmnopqrstuvwxyz"
// strATZ = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// strATz_sc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"


/////////////////////////////////////////////////////////////////



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i) cin>>a[i];

//        for(int i=0; i<n; ++i)
//        {
        if(n==2)
        {
            if(a[0]<=a[1]) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(n==3)
        {
            if(a[1]<min(a[2],a[0]) || a[1]>max(a[2],a[0]))
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;



        }
        else cout<<"YES\n";
//        }


}
return 0;
}
