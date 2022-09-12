// Count '1' in any binary number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
   cin>>n;
   // n er moddhe joto 1 thakbe totobar loop cholbe
   while(n){
    n=n&(n-1);
    count++;
   }
   cout<<count;


    return 0;
}

