//https://codeforces.com/problemset/problem/1520/B
// submitted 800

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s=to_string(n);
        int len=s.length();
        int arr[len];
        if(n<10) cout<<n<<"\n";
        else{
            for(int i=0; i<len; i++){
                arr[i]=1;
            }
        }
        cout<<s[1];
    }



    return 0;
}
