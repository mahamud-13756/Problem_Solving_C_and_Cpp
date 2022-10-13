#include<bits/stdc++.h>
using namespace std;

#include<stdio.h>
#include<string.h>
struct table{

  char name[100];
  char tokentype[100];
  int place;

};
int chk(char str[100])
{
    if(strcmp(str,"int")==0 ){
        return 1;

    }
    else{
        return 0;
    }


}
int main()
{
   struct table t[20];
   int table_index=0;
   char str[1000];
    scanf("%[^*]s",&str);
    int lex_index = 0;
    char lexeme[1000];

    char lexeme_list[100][100];
    int lex_list_index = 0;


    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' '  || str[i]=='\n')
        {
           // strcpy(lexeme_list[lex_list_index],lexeme);
            if(chk(lexeme)==1){

                strcpy(t[table_index].name,lexeme);
                strcpy(t[table_index].tokentype,"key");
                t[table_index].place=0;
                table_index++;
            }
            lex_list_index++;
            lex_index = 0;
            lexeme[lex_index]='\0';
        }

        else
        {
            lexeme[lex_index]=str[i];
            lex_index++;
            lexeme[lex_index]='\0';
        }
    }


    printf("name  tokentype   place\n");
   for (int i=0;i<table_index;i++){

      printf("%s  %s   %d\n",t[i].name,t[i].tokentype,t[i].place);


    //strcpy(t[i].name,"sdd");
    //strcpy(t[i].tokentype,"id");
    //t[i].place=6;
   }

}













/*
char str[1000];
    scanf("%[^*]s",&str);
    int lex_index = 0;
    char lexeme[1000];

    char lexeme_list[100][100];
    int lex_list_index = 0;


    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            strcpy(lexeme_list[lex_list_index],lexeme);
            lex_list_index++;
            lex_index = 0;
            lexeme[lex_index]='\0';
        }

        else
        {
            lexeme[lex_index]=str[i];
            lex_index++;
            lexeme[lex_index]='\0';
        }
    }
    printf("%s",lexeme_list[0]);

    return 0;

*/




