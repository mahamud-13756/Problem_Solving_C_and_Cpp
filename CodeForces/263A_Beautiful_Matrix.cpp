// https://codeforces.com/problemset/problem/263/A
/*
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
*/



#include <iostream>

using namespace std;

int main()
{
    int x, y, i, j, a[5][5], i1, j1;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            cin >> a[x][y];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                if (i > 2)
                {
                    i1 = i - 2;
                }
                else
                {
                    i1 = 2 - i;
                }
                if (j > 2)
                {
                    j1 = j - 2;
                }
                else
                {
                    j1 = 2 - j;
                }
            }
        }
    }
    cout << i1 + j1 << endl;
    return 0;
}
