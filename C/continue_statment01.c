// Continue statment
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i == 5 || i == 9)
        continue;
        printf("%d ",i);
    }
}


