// T n R n

#include<stdio.h>
void tnrn_add(void);// Function Decleration
void tsrn_sub(int , int );
int tnrs_mul(void);
float tsrs_div(int , float );
int main()
{

    /*tnrn_add();// Function call

    int a,b;
    scanf("%d %d",&a,&b);
    tsrn_sub(a,b);

    int store =tnrs_mul();//m
    printf("Mul= %d",store);
*/
    int w;
    float q;
    float t;
    scanf("%d %f",&w,&q);
    t=tsrs_div(w,q);
    printf("Div= %f",t);

}

float tsrs_div(int x, float y)
{
    float s=x/y;
    return s;
}


int tnrs_mul()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=a*b;

    return(m);
}




 void tsrn_sub(int x, int y)//x=a, y=b;
 {
     int s=x-y;
    //s1=a-b;

    printf("sub= %d",s);
 }



 void tnrn_add() //Function Define
 {
    int a,b,s,s1;
    scanf("%d %d",&a,&b);
    s=a+b;
    //s1=a-b;

    printf("sum= %d",s);

 }







/*#include<stdio.h>
// Take nothing Return Something
int add(void);
int main()
{
    int r;
    r=add();
    printf("%d\n",r);


}

int add()
{
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    c=a+b;

    return c;
}
*/
