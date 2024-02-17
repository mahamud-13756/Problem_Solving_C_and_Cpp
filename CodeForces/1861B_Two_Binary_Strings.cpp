//https://codeforces.com/problemset/problem/1861/B
//submitted 1000

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int tc; cin>>tc;
   while(tc--)
   {
       string a,b; cin>>a>>b;
       int flag=0;
       for(int i=0; i<a.size(); ++i){
           if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
            flag = 1;
           }
       }
       if(flag) cout<<"YES\n";
       else  cout<<"NO\n";


   }
    return 0;
}
