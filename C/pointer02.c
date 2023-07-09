#include<stdio.h>
void main()
{
    int a[5] = {10,20,30,40,50};
    int *p,i;
    p=&a;
    for(i=0;i<5;i++)
    {
        // printf("\n%d\t%u",a[i],&a[i]);
        printf("\n%d\t%u",*(p+i),(p+i));
    }
}