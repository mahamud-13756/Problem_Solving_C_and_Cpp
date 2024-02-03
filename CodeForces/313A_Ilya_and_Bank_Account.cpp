//https://codeforces.com/problemset/problem/313/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////




int main()
{
    int n,new_n,d1,d2;
    cin>>n;

    string s=to_string(n);
    int temp=s[s.size()-1];
    s[s.size()-1]=s[s.size()-2];
    s[s.size()-2]=temp;

//    cout<<s;
//    return 0;
    new_n=stoi(s);

//    cout<<new_n<<"\n";
//    return 0;

    d1=n/10;
    d2=new_n/10;

    if(n>0) cout<<n <<"\n";
    else{
        if(d1>d2) cout<<d1<<"\n";
        else cout<<d2<<"\n";

    }


    return 0;
}


/*
int main () {
	int n;
	cin >> n;
	int Max = n;
	if (n/10 > Max) Max = n/10;
	if (n%10 + (n/100)*10 > Max) Max = n%10 + (n/100)*10;
	cout << Max;
}
*/
