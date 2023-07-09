// with argument with return
#include<stdio.h>
int calc(int a,int b)
{
    return a*b;
}
int main()
{
    int x = calc (30,20);
    printf("total : %d",x);
}