#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    int id=1;

    scanf("%[^@]s",&array);
    for(int i=0; i<strlen(array); i++)
    {

        if(array[i]=='/' && array[i+1]=='/')

        {
            int a=i, S=strlen(array)-i;
            for(int j=0;j<S;j++)
            {
                a++;
                if(array[a]=='\n')
                {
                    break;
                }
            }
            i=a;
        }
        else if(array[i]=='/' && array[i+1]=='*')
        {
            int b=i,S2=strlen(array)-i;
            for(int j=0;j<S2;j++)
            {
                b++;
                if(array[b]=='*' && array[b+1]=='/')
                {
                    break;
                }
            }
            i = b+2;
        }
        else
        {
               // printf("%c", array[i]);
        }
        if(array[i]=='\n')
        {
            id++;
            printf("\n%d\t", id-1);
        }

    }
}
