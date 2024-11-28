#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin>>t;
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		
		if(a==0) 
			{
				if(b%2!=0) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			
		else if(b==0) 
			{
				if(a%2!=0) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
		
		else
		{
			if( ((2*b)+a)%2==0 ) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}