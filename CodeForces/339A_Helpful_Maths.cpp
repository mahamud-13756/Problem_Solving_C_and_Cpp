// https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s,ns;
    cin>>s;

    int l=s.length();
    sort(s.begin(), s.end()); // sort function included in <algorithm>


    int a=ceil(l/2);


    for(int i=a; i<l; i++){

        cout<<s[i];

        if(i<l-1){
            cout<<"+";
        }
    }




    return 0;
}


