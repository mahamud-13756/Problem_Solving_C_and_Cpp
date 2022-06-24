// https://codeforces.com/problemset/problem/263/A

#include<iostream>
using namespace std;

int main()
{
    int i,j,a[5][5],k;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];

            if(a[i][j]==1)
            {

               k=abs(2-j)+abs(2-i);


            }

        }


    }
    cout<<k<<endl;

    return 0;
}
