// Lab (8-11-2022)

#include<bits/stdc++.h>
using namespace  std;
int retval (string n){
    if(n=="q0")
        {
             return 0;
        }

    else if(n=="q1")
        {
             return 1;
        }
    else if(n=="q2")
        {
             return 2;
        }
    else if(n=="qF")
        {
             return 3;
        }
    else if(n=="D")
        {
             return 4;
        }
}


int main()
{
    string dfa[10][10];

    int row =5;

    cout<<"States 0 1"<<endl;

    for(int i =0;i<row;i++)
    {
        cin>>dfa[i][0];
        cin>>dfa[i][1];
        cin>>dfa[i][2];

    }

    cout<< "States 0 1"<<endl<<endl;
    for(int i =0;i<row;i++)
    {
        cout<< dfa[i][0]<<"\t"<<dfa[i][1]<<"\t"<<dfa[i][2]<<"\t"<<dfa[i][3]<<"\t"<<dfa[i][4]<<endl;

    }

    string input;

    cin>>input;
    string p_state="q0";

    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='0')
        {
              p_state=(dfa[retval(p_state)][1]);
        }

        else if(input[i]=='1')
        {
             p_state=(dfa[retval(p_state)][2]);
        }

        else

        {
            p_state="q0";
            break;

        }
    }

    if(p_state=="qF")
    {
        cout<<"Hurray"<<endl;
    }

    else
    {
        cout<<"Not Valid"<<endl;
    }

    return 0;
}

/*
0 1 1
0 2 3
2 3 1
3 0 1


q0 D q1
q1 q2 D
q2 D qF
qF qF qF
D D D

10100

*/
