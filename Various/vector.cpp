#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    
    vector<int> vc(n);

    //input
    for(int i=0; i<n; ++i) {
        int a;
        cin>>a; 
        vc.push_back(a);
    }

    //output part 
    for(int i=0; i<n; ++i) {
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    for(auto r : vc) {cout<<r<<" ";}
}