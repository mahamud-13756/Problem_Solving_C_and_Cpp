//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
// problem link : https://codeforces.com/contest/1974/problem/A
// Name         : .cpp
// Author       : Md. Mahamud Mredha
// Version      :
// Copyright    : use it under your responsibility
// Description  : Rating 900, Ansi-style
// status       : accepted
//=======================================================================================================|
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;

        int cnt= (y+1)/2;
        int remain= ( (y/2)*7 ) + ( (y%2)*11 );
        int st= max(0, x-remain);

        cnt+= (st+14)/15;
        cout<<cnt<<endl;




      /*  int cnt=0;

        while(x>0 || y>0)
        {
            if(y>=2)
            {
                y = y-2;
                x = x-7;
                cnt++;
            }
            else
            {
                if(y==1)
                {
                    y = y-1;
                    x = x-11;
                    cnt++;
                }
                else
                {
                    x = x -15;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;*/
    }

    return 0;
}
