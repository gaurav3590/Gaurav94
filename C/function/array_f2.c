#include<stdio.h>
int largest(int a[])
{
    int i,t=a[0];
    for(i=0;i<5;i++)
    if (t>a[i])
    {
        t=a[i];
    }
    return t;
}
int smallest(int a[])
{
    int i,t=a[0]; 
    for(i=0;i<5;i++)
    if (t<a[i])
    {
        t=a[i];
    }
    return t;
}
void main()
{
    int a[5],x,y,i;
    for(i=0;i<5;i++)
    {
        printf("enter your number of %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    x=largest(a);
    printf("\nlargest : %d ",x);
    y=smallest(a);
    printf("\nsmallest : %d ",y);
}