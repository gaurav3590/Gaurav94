// recursive function 
//  program of factorial number
#include<stdio.h>
int fact(int a)
{
    if (a==1)
        return 1;
    else 
        return a * fact (a-1);
}
int main()
{
    int n,f;
    printf("Enter Number :");
    scanf("%d",&n);
    f = fact(n);
    printf("Given number factorial is %d",f);
}