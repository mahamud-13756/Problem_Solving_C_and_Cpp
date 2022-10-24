//https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
     int s,l=0,b=0;
    cin>>n;

    while(n!=0){
        if(n%10==4 || n%10==7){

            l++;
        }
        n /= 10;
        //n=n/10;
    }
    if(l==4 || l==7){
        cout<<"YES"<<endl;

    }
    else {
            cout<<"NO"<<endl;
         }


    return 0;
}



//
//#include <iostream>
//using namespace std;
//string a;
//int j;
//int main() {
//    cin >> a;
//    for (int i = 0; i < a.size(); i++) {
//        if (a[i] == '7' || a[i] == '4') {
//            j++;
//        }
//    }
//    if (j == 4 || j == 7) {
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }
//}
