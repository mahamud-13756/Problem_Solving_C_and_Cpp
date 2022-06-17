#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s[100];

    for(int i=0; i<n; i++){

        cin>>s[i];


    }
    cout<<"\n";

    for(int i=0; i<n; i++){
        if(s[i].size()>10){
            int j;
            int cnt=0;

            for(j=0;j<s[i].size();j++ ){
                cnt=cnt+1;


            }
            cout<<s[i][0]<<cnt-2<<s[i][cnt-1]<<endl;

        }
        else{
            cout<<s[i]<<endl;
        }

    }

    return 0;
}
