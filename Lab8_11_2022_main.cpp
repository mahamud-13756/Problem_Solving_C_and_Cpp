#include<bits/stdc++.h>
using namespace std;

int main()
{
    string dfa[10][10];

    int row =4;

    //cout<<"States a b"<<endl;

    for(int i =0;i<row;i++)
    {
        cin>>dfa[i][0];
        cin>>dfa[i][1];
        cin>>dfa[i][2];
    }

    cout<< "States\ta\tb"<<endl<<endl;
    for(int i =0;i<row;i++)
    {
        cout<< dfa[i][0]<<"\t"<<dfa[i][1]<<"\t"<<dfa[i][2]<<endl;

    }

    string input;

    cin>>input;
    int p_state=0;

    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='a')
        {
              p_state=stoi(dfa[p_state][1]);
        }

        else if(input[i]=='b')
        {
             p_state=stoi(dfa[p_state][2]);
        }

        else

        {
            p_state=0;
            break;

        }
    }

    if(p_state==2)
    {
        cout<<"Hurray"<<endl;
    }

    else
    {
        cout<<"Hoy nai Botto"<<endl;
    }

    return 0;
}


/*
0 0 1
1 2 3
2 3 1 
3 0 1


0 1 3 
1 3 2
2 0 2
3 3 3 

ab
*/