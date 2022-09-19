//https://codeforces.com/problemset/problem/318/A

#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a >> b;
    if(a%2 == 0)
    {
        c = a / 2;
    }
    else
    {
        c = (a + 1) / 2;
    }
    if(b <= c)
    {
        cout << (b * 2) - 1;
    }
    else
    {
        cout << (b - c) * 2;
    }
}



// runtime error

/*using namespace std;

int main()
{
    long long int n,k,j=0,i;
    cin>>n>>k;
    long long int a[n];


    for(i=1; i<=n; i+=2){
        a[j]=i;
        j++;
    }


    for(i=2; i<=n; i+=2){
        a[j]=i;
        j++;
    }

    cout<<a[k-1]<<endl;



    return 0;
}
*/
