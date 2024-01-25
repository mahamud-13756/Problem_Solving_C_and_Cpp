#include<stdio.h>

struct table
{
    char name[100];
    char tokentype[100];
    int place;
};
int chkid(char str[100])
    {
        int c=0,k=0;
        for(int i=0;i<strlen(str);i++)
        {
           if((strcmp(str,"int")==0) || (strcmp(str,"auto")==0) || (strcmp(str,"break")==0) || (strcmp(str,"case")==0) || (strcmp(str,"char")==0)||  (strcmp(str,"continue")==0) || (strcmp(str,"do")==0) || (strcmp(str,"default")==0) || (strcmp(str,"const")==0)  ||(strcmp(str,"double")==0)|| (strcmp(str,"else")==0) || (strcmp(str,"enum")==0) || (strcmp(str,"extern")==0)||  (strcmp(str,"for")==0) || (strcmp(str,"if")==0) || (strcmp(str,"goto")==0) ||  (strcmp(str,"float")==0)||  (strcmp(str,"long")==0) || (strcmp(str,"register")==0) ||  (strcmp(str,"return")==0) || (strcmp(str,"signed")==0) || (strcmp(str,"static")==0) || (strcmp(str,"sizeof")==0) || (strcmp(str,"short")==0) || (strcmp(str,"struct")==0) || (strcmp(str,"switch")==0) || (strcmp(str,"typedef")==0)|| (strcmp(str,"union")==0) || (strcmp(str,"void")==0) || (strcmp(str,"while")==0) || (strcmp(str,"volatile")==0) || (strcmp(str,"unsigned")==0))
            {
                c=1;
            }
            else if(str[i]=='=' || str[i]=='+' || str[i]=='-' || str[i]=='/' || str[i]=='*' || str[i]=='%'||  str[i]=='>' || str[i]=='<' || str[i]=='|'||  str[i]=='&' )
            {
                c=2;
            }
            else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (c==3 && str[i]>='0' && str[i]<='9') || (str[i]=='_'))
            {
                char st[10];
                st[k]=str[i];
                k++;
                if((strcmp(st,"main")==0) ||  (strcmp(st,"printf")==0) || (strcmp(st,"scanf")==0))
                {
                    c=1;
                }

                else{
                    c=3;
                }

            }

            else if(str[i]=='"' || str[i]=='\'' || str[i]==';' || str[i]==',' || str[i]=='(' || str[i]==')'||  str[i]=='{' || str[i]=='}' ||  str[i]=='[' || str[i]==']')
            {
                c=5;
            }


            else
            {
                c=0;
               break ;
            }
        }
        return c;

    }
int main()
{
    struct table t[20];
    char str[100],lex1[100],lex2[100][100];
    int l1=0,l2=0,ch,t1=0,row=0;
    scanf("%[^@]s",&str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            if(str[i]=='\n')
            {
                row++;
            if(chkid(lex1)==1)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"key");
                t[t1].place=row;
                t1++;
            }
            else if(chkid(lex1)==2)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Operator");
                t[t1].place=row;
                t1++;

            }
            else if(chkid(lex1)==3)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Identifier");
                t[t1].place=row;
                t1++;
            }
            else if(chkid(lex1)==5)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Separator");
                t[t1].place=row;
                t1++;

            }
            }
            else{
            if(chkid(lex1)==1)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"key");
                t[t1].place=row;
                t1++;

            }
            else if(chkid(lex1)==2)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Operator");
                t[t1].place=row;
                t1++;
            }
            else if(chkid(lex1)==3)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Identifier");
                t[t1].place=row;
                t1++;

            }
            else if(chkid(lex1)==5)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Separator");
                t[t1].place=row;
                t1++;
}
            else if(chkid(lex1)==6)
            {
                strcpy(t[t1].name,lex1);
                strcpy(t[t1].tokentype,"Constant");
                t[t1].place=row;
                t1++;

            }

            }

            l2++;
            l1=0;
            lex1[l1]='\0';

        }
        else{
            lex1[l1]=str[i];
            l1++;
            lex1[l1]='\0';
        }
    }
    printf("\n name          tokentype          place\n");
    for(int j=0;j<t1;j++)
    {
        printf("   %s           %s                 %d\n",t[j].name,t[j].tokentype,t[j].place);
    }
}
