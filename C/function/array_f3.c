#include<stdio.h>
void running(int a[])
{
    int i,j;
    printf("running total :\n");
    for(i=0;i<5;i++)
    {
        if (i==0)
        {
            printf("%d",a[i]);
        }
        else
        {
            j=a[i] + a[i-1];
            printf("\n%d\t%d",a[i],j);
        }
    }

}
void main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
     printf("Enter element[%d]:",i);     
     scanf("%d",&a[i]);
    }
    running(a);
}