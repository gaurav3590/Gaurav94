// go to statement....

#include<stdio.h>
int main()
{
    int i=1,n,j=1,a=1;
    printf("Enter N :");
    scanf("%d",&n);

    table:
    if (i<=10)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
        goto table;
    }
    n++;
    printf("\n");
    
    lable:
    if (j<=10)
    {
        printf("\n%d * %d = %d",n,j,n*j);
        j++;
        goto lable;
    }

     n++;
    printf("\n");
    
    cable:
    if (a<=10)
    {
        printf("\n%d * %d = %d",n,a,n*a);
        a++;
        goto cable;
    }
}