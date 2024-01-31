//https://codeforces.com/problemset/problem/1915/B
//submitted 800 div 4 B
//
//
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int add=0;
        char m[3][3];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>m[i][j];
            }
        }

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                // int asciiValue = static_cast<int>(myChar);
                add+=static_cast<int>(m[i][j]);
            }
            if(add!=198){
                    if(abs(add-198)==3) cout<<"B"<<"\n";
                    else if(abs(add-198)==2) cout<<"A"<<"\n";
                    else cout<<"C"<<"\n";
                    break;

            }
            add=0;

        }




    }


    return 0;
}

