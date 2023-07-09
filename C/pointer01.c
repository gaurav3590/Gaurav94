#include<stdio.h>
void main()
{
    int a=20,*p;
    p=&a;
    printf("Value of a is :%d",a);
    printf("\n Address of a is :%u",&a);
    printf("\n Address of a using p is :%d",p);
    printf("\n Address of p is :%u",&p);
    printf("\n Value of a using p is:%d",*p);
}
