#include<stdio.h>
#include<string.h>
struct table
{
    char name[100];
    char tokentype[100];
    int place;
};

int check(char str[100])
{
    if(strcmp(str,"auto")==0 || strcmp(str,"break")==0 || strcmp(str,"case")==0 || strcmp(str,"char")==0 || strcmp(str,"const")==0 ||
       strcmp(str,"continue")==0 || strcmp(str,"default")==0 || strcmp(str,"do")==0 || strcmp(str,"double")==0 || strcmp(str,"else")==0 ||
       strcmp(str,"enum")==0 || strcmp(str,"extern")==0 || strcmp(str,"float")==0 || strcmp(str,"for")==0 || strcmp(str,"goto")==0 ||
       strcmp(str,"if")==0 || strcmp(str,"int")==0 || strcmp(str,"long")==0 || strcmp(str,"register")==0 || strcmp(str,"return")==0 ||
       strcmp(str,"short")==0 || strcmp(str,"signed")==0 || strcmp(str,"static")==0 || strcmp(str,"sizeof")==0 || strcmp(str,"unsigned")==0 ||
       strcmp(str,"void")==0 || strcmp(str,"volatile")==0 || strcmp(str,"while")==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct table t[20];
    int table_index = 0;
    char str[1000];
    scanf("%[^$]s",&str);
    int lex_index = 0;
    char lexeme[1000];
    int line = 1;
    char lexeme_list[100][100];
    int lex_list_index = 0;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]==';')
        {
            if(check(lexeme)==1)
            {
                strcpy(t[table_index].name, lexeme);
                strcpy(t[table_index].tokentype, "key");
                t[table_index].place=line;
                table_index++;
            }
            lex_list_index++;
            lex_index = 0;
            lexeme[lex_index]='\0';

            if(str[i]=='\n')
                {
                    line++;
                }
        }
        else
        {
            lexeme[lex_index]=str[i];
            lex_index++;
            lexeme[lex_index]='\0';
        }

    }
    printf("\n\n");
    for(int i=0; i<table_index; i++)
    {
        printf("%s %s %d\n", t[i].name, t[i].tokentype, t[i].place);
    }
}
