#include<stdio.h>
int fibbonaci(int);
int main()
{
    int n,i;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("fibbonaci series :");
    for(i=1;i<=n;i++)
    {
        printf("%d ",fibbonaci(i));
    }
}
int fibbonaci(int i)
{
    if (i==0)
        return 0;
    else if (i==1)
        return 1;
    else 
    return(fibbonaci(i-1)+fibbonaci(i-2));
}