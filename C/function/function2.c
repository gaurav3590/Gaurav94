// no argument no return
#include<stdio.h>
void dosum()
{
    int a,b,sum;
    printf("Enter A :");
    scanf("%d",&a);
    printf("\nEnter B :");
    scanf("%d",&b);
    sum=a+b;
    printf("sum :%d\n",sum);
}
int main()
{
    dosum();
}