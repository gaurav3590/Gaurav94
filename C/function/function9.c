#include<stdio.h>
int perfect (int n)
{
    int k=0;
    for (int i=1; i<n ;i++)
    {
        if (n%i==0)
        k=k+i;
    }
    return k;
}
int main()
{
    int a,n;
    printf("Enetr no :");
    scanf("%d",&n);
    a = perfect(n);
    if (n==a)
    {
        printf("%d is perfect number",n);
    }
    else
    {
        printf("%d is not perfect number",n);
    }
}