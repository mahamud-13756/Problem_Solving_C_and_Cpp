//https://codeforces.com/problemset/problem/133/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main()
{
    int co=0;
    string c;
    cin>>c;
    for(int i=0; i<c.size(); i++)
    {
        if(c[i]>=33 && c[i]<=126){
	       if(c[i]=='H'||c[i]=='Q'||c[i]=='9')
	        {
	            co++;

	        }

        }
    }

    if(co) cout<<"YES\n";
    else cout<<"NO\n";



    return 0;
}
