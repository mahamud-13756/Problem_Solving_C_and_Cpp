#include<bits/stdc++.h>
using namespace std;
int main()
{
    string dfa [10] [10];
    int row=4;
    printf("states a b\n");
    for (int i=0;i<row;i++){
        cin>>dfa [i] [0];
        cin>>dfa [i] [1];
        cin>>dfa [i] [2];
    }
       printf("dfa table s   b\n");
    for(int i=0;i<row;i++){
        cout<<dfa[i][0]<<" "<<dfa[i][1]<<" "<<dfa[i][2]<<"\n";

    }
    string input;
    cin>>input;
    int p_state=0;
    for(int i=0;i<input.length();i++){
        if(input[i]=='a'){
                p_state=stoi(dfa[p_state][1]);

        }
        else if(input[i]=='b'){
            p_state=stoi(dfa[p_state][2]);

        }
        else{
           p_state=0;
           break;
        }


    }
    if(p_state==3){
        cout<<"hurraah";
    }
    else{
        cout<<"NOT VALID";
    }
}
