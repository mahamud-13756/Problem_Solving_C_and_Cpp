#include<bits/stdc++.h>
using namespace std;
int main()
{
    string dfa[10][10];
    int row=4;
    cout<<"states     a      b     n\n";
    for(int i=0;i<row;i++){
        cin>>dfa[i][0];
        cin>>dfa[i][1];//a
        cin>>dfa[i][2]; //b
        cin>>dfa[i][3]; //n
    }
     cout<<"states     a      b         n\n";
     for(int i=0;i<row;i++){
        cout<<dfa[i][0]<<"         "<<dfa[i][1]<<"          "<<dfa[i][2]<< "       "<<dfa[i][3]<<endl;
     }

     cout<<"input: ";
     string input;
     cin>>input;

     int present_state=0;

     for(int i=0;i<input.length();i++)
     {
         if(input[i]=='a'){
             present_state=stoi(dfa[present_state][1]);

         }
         else if(input[i]=='b'){
                 present_state=stoi(dfa[present_state][2]);
         }
          else if(input[i]=='n'){
                 present_state=stoi(dfa[present_state][3]);
         }

         else{
              present_state=0;
         break;

         }
     }

     if(present_state=="qF"){
        cout<<"accepted"<<endl;
     }

     else{
        cout<<"not accepted"<<endl;
     }

}
