// https://codeforces.com/problemset/problem/282/A
/*
#include<iostream>
#include <string>
using namespace std;

int main()
{
    int n,X=0,i;
    cin>>n;
    string a;


    for(i=0; i<n; i++)
    {
        cin>>a;

        if(a=="++X" || a=="X++"){
            X++;
        }
        else{
            X--;
        }

    }
    cout<<X<<endl;

    return 0;
}

*/

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int n,X=0,i;
    cin>>n;
    string a;


    for(i=0; i<n; i++)
    {
        cin>>a;

        if(a[1]=='+'){
            X++;
        }
        else{
            X--;
        }

    }
    cout<<X<<endl;

    return 0;
}
