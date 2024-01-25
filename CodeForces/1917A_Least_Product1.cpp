//https://codeforces.com/problemset/problem/1917/A
//constructive_algorithms math *800
//submitted

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //-------input part end-------
        int neg=0,zero=0;

        for(int j=0; j<n; j++){
            if(a[j]<0) neg++;
            else if(a[j]==0) zero++;
            else{}
        }

        if(zero>0) printf("0\n");
        else{
            if(neg%2!=0) printf("0\n");
            else {
                printf("1\n");
                printf("1 0\n");
            }

        }


    }

    return 0;
}
