#include<stdio.h>
void array(int a[])
{
    int i;
    for(i=0;i<5;i++)
    printf("\na[%d]:%d",i,a[i]);

}
void main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
     printf("a[%d]:",i);     
     scanf("%d",&a[i]);
    }
    array(a);
}