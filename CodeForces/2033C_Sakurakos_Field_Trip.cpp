#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int a[n]; for(int i=0; i<n; ++i) cin>>a[i];

        //count korbo koita
        int cnt=0, j=n-2;
        for(int i=1; i<(n/2); ++i)
        {
            if(a[i-1]==a[i] && a[j]==a[j+1])
            {
                if(a[i] == a[j]) cnt+=2;
                else
                {
                    a[i] = a[i] ^ a[j];
                    a[j] = a[i] ^ a[j];
                    a[i] = a[i] ^ a[j];
                }

            }
            else if(a[i-1]==a[i] || a[j]==a[j+1])
            {
                if(a[i] == a[j] || a[i]==a[j+1] || a[i-1]==a[j]) cnt+=1;
                else
                {
                    a[i] = a[i] ^ a[j];
                    a[j] = a[i] ^ a[j];
                    a[i] = a[i] ^ a[j];
                }
            }

            --j;

            
        }

        if(n%2==0)
        {
            if(a[n/2-1] == a[n/2]) cnt++;
        }
        else
        {
            if(a[n/2-1]== a[n/2] ) cnt++;
            if(a[n/2]== a[n/2+1] ) cnt++;
        }
        cout<<cnt<<endl;
    }
}