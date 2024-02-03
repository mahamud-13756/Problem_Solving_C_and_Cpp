//https://codeforces.com/problemset/problem/405/A
//submitted 900
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long


/////////////////////////////////////////////////////////////////



int main()
{
    int n;
    cin>>n;
    vector<int> vc;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    //reverse(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++)
    {
        cout<<vc[i]<<" ";
    }
    cout<<"\n";


    return 0;
}



/*
//https://codeforces.com/problemset/problem/405/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }

        }

    }

     for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
     }



    return 0;
}
*/
