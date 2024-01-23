//https://codeforces.com/contest/1759/problem/0

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	string s[t];
	string p="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int pl=p.size(),n;
	for(int i=0; i<t; i++){
		cin>>s[i];
		if(strstr(p.c_str(),s[i].c_str()))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	}

}
