//https://codeforces.com/problemset/problem/1702/D
//submitted 1000
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string s; cin>>s;
        int p; cin>>p;
        ll ad=0;
        for(int i=0; i<s.size(); ++i){
            ad+=s[i]-96;
        }
        //cout<<ad;
        int st=(s.size());
        int j=0;
        //sort(s.begin(), s.end());
        int st1=0;
        if(ad<=p) cout<<s<<"\n";
        else{
            while(st--){
               st1+=(s[j]-96);

               if(st1<=p){
                cout<<s[j];
               }
               else{ st1-=(s[j]-96); }
               j++;
            }

            if(j==0) cout<<endl;
            else cout<<endl;

        }

    }
    return 0;
}
