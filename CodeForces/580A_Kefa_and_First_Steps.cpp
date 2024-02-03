//https://codeforces.com/problemset/problem/580/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main()
{
    set<int> st;
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        //st.insert(a[i]);
    }

         // 2 2 1 3 4 1

    for(int i=0; i<=n-1; i++)
    {
        if(n==1 && a[i]>0){cout<<"1\n"; return 0;}
        else {
            if(a[i]<=a[i+1] ){
            c++;
        }
            else{
                st.insert(c+1);
                c=0;
            }
        }

        if(i==n-2){
            st.insert(c+1);

        }
    }
    int lastValue = *--st.end();
    cout<< lastValue<<"\n";



    return 0;
}
