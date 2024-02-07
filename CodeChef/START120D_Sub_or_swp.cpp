//https://www.codechef.com/START120D/problems/ASM120
//

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;

        ll result = gcd(x, y);
        cout << result << "\n";
    }
    return 0;
}










/*
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
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        //int j=0;
        while(x!=0)
        {
            if(x>y)
            {
                ll temp =x;
                x=y;//cout<<x;
                y=temp;//cout<<j<<"if"<<y<<"\n";
                //j++;
            }
            else
            {
                ll s=x;
                x=y-s;
                y=s;
                //cout<<j <<"else"<<x<<y<<"\n";
                //j++;
            }

        }


        cout<<y<<"\n";
        x=0;y=0;

    }
    return 0;
}
*/
