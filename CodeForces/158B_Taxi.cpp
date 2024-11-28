//========“In the name of ALLAH, The Most Gracious and The Most Merciful“===============================|
    // problem link : //https://codeforces.com/problemset/problem/158/B
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
    int t; cin>>t;
    int a[t];
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    for(int i=0; i<t; ++i)
    {
        cin>>a[i];
        if(a[i]==1) cnt1++;
        else if(a[i]==2) cnt2++;
        else if(a[i]==3) cnt3++;
        else cnt4++;
    }
    //cnt3 er kaj
    if(cnt3>=cnt1) {cnt1=0; }
    else cnt1=cnt1-cnt3;
    //cnt2 er kaj
    if(cnt2%2==0) cnt2 = cnt2/2;
    else{
        cnt2 = cnt2/2;
        cnt2++;
        cnt1-=2;
    }
    //cnt1 er kaj
    cnt1=(cnt1+3)/4;

    cout<<cnt4+cnt3+cnt2+cnt1<<endl;




}
