//https://codeforces.com/problemset/problem/1916/B
//submitted 900
#include<bits/stdc++.h>
using namespace std;

long long LCM_TLE(long long, long long);
long long LCM_Function(long long, long long);
long long GCD_Function(long long, long long);
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a, b, c;
        cin>>a >>b;

        c=LCM_Function(a,b);

        if(c==b) cout<<(b*(b/a))<<"\n";
        else cout<<c<<"\n";
    }

    return 0;
}

long long GCD_Function(long long x, long long y)
{
    while(y!=0)
    {
        long long temp =y;
        y = x%y;
        x = temp;
    }
    return x;
}

long long LCM_Function(long long x, long long y)
{
    return ((x*y)/GCD_Function(x,y));

}



int LCM_TLE(int a, int b)
{
    int maxx = (a>b? a: b);

    while(1)
    {
        if(maxx%a==0 && maxx%b==0){
            return maxx;
        }
        maxx++;
    }
}
