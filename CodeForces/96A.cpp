#include<iostream>
#include <string.h>

using namespace std;


int main()
{
    int count=0;
    char flag, ss[100];

    cin>>ss;

    flag = ss[0];

    if(strlen(ss) >= 8) {
        for(int i=0; i<strlen(ss); i++) {
            if ( count == 7 ) {
                cout<<"Yes";
                break;
            }
            if( flag == ss[i]) {
                count++;
            }
            else {
                flag = ss[i];
                count =1;
            }
        }
    }
    if ( count < 7 ){
        cout<<"No";
    }


    return 0;
}
