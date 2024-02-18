	//============================================================================
	// problem link :
	// Name         : .cpp
	// Author       : Md. Mahamud Mredha
	// Version      :
	// Copyright    : use it under your responsibility
	// Description  : Hello World in C++, Ansi-style
	// status       : accepted
	//============================================================================


//https://codeforces.com/problemset/problem/451/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m; cin>>n>>m;

    int st=min(n,m);
    if(st%2==0) cout<<"Malvika\n";
    else  cout<<"Akshat\n";

    return 0;
}
