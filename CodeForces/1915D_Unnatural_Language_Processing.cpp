//https://codeforces.com/problemset/problem/1915/D
//submitted 900
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
        int n;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        //      bacedbab
        for(int i=0; i<n; i++)
        {
            if(a[i]=='a' || a[i]=='e')
            {
                if(i<n-2)
                {
                    if((a[i+1]!='a' && a[i+1]!='e') && (a[i+2]!='a' && a[i+2]!='e'))
                    {
                        cout<<a[i]<<a[i+1]<<".";//ba.ced.
                        i++;
                    }

                    else cout<<a[i]<<".";//ba.
                }
                else if(i==(n-2))
                {
                    cout<<a[i]<<a[i+1]<<"\n";
                    i++;
                }
                else cout<<a[i]<<"\n";


            }
            else
            {
                cout<<a[i];//b, ba.c, ba.ced.b
            }


        }
    }

        return 0;
    }

