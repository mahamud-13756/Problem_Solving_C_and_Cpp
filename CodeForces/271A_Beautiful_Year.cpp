//https://codeforces.com/problemset/problem/271/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,a,b,c,d;
    cin>>y;

    while(1){
        y++;

        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;

    return 0;
}






























//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//
//    int n,y[],f=1,i,j;
//    cin>>n;
//
//    for(int k=0; k<4; k++){
//        y[k]=n[k];
//    }
//
//    y++;
//    for(i=0; i<4; i++){
//        for(j=1; j<4; j++){
//            if(y[i]==y[j+i]){
//                f=0;
//                y++;
//                break;
//            }
//            else{
//
//                continue;
//            }
//
//    }
//
//    }
//    if(f==0){
//
//    }
//    else{
//        cout<<y;
//    }
//
//
//    return 0;
//}
