// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    string s;
    cin>>s;


    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout << s << endl;

    for ( l = 0; s[l]; l++);

    //cout << l << endl;

    for(int i=0; i<l; i++){

       if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='e' || s[i]=='u' || s[i]=='y'){

            continue;

       }

       else{
        cout<<"."<<s[i];
       }

    }



    return 0;
}
