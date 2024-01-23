#include<stdio.h>

void input(int *);
void display (int *);
void sorting (int *);
int main()
{
    int a[5];

    input(a);
    display(a);
    sorting(a);

}

void input(int *x)
{
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d",(x+i));
    }

}

void display(int *y)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",*(y+i));
    }
    printf("\n");
}

void sorting(int *z)
{
    int i,s;
    for(i=0; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(z[i]<z[j])                // 3 5 4 1 2
            {

            }
            else
            {
                s=z[i+1];
                z[i+1]=z[i];
                z[i]=s;

            }
        }

    }
}
