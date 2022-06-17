//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[3];
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>p[j];

        }

        if(( p[0]+p[1]+p[2] )>=2 )
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
