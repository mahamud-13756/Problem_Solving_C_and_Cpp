//https://codeforces.com/problemset/problem/1919/B
//submitted 800
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cp=0,cm=0;
        cin>>n;
        char s[n];



        for(int i=0; i<n; i++){
            cin>>s[i];
        }

        for(int i=0; i<n; i++){
            if(s[i]=='+') cp++;
            else cm++;
        }

        if(cp==n || cm==n) cout<<n<<"\n";
        else cout<<abs(cp-cm)<<"\n";


    }

    return 0;
}
