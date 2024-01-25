// Make token

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char lexeme[100],lexeme_list[100][100];
    int lex_index=0, lex_list_index=0;
    getline(cin,s,'+');

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' '){
            lex_index=0;
            lexeme[lex_index]='\0';
        }

        else{
            lexeme[lex_index]=s[i];
            lex_index++;
            lexeme[lex_index]='\0';

        }


    }
    printf("%s",lexeme);



    return 0;
}
