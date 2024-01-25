#include<stdio.h>

int main()
{
    int a=5,*b;
    b=&a;
    double c,*d;
    float e,*f;
    char g,*h;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%p\n",b);
    printf("%u\n",sizeof(b));
    printf("%u\n",sizeof(d));
    printf("%u\n",sizeof(f));
    printf("%u\n",sizeof(h));
    printf("\n");
    printf("%u\n",sizeof(a));
    printf("%u\n",sizeof(c));
    printf("%u\n",sizeof(e));
    printf("%u\n",sizeof(g));

}
