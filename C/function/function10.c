#include<stdio.h>
int count (int n)
{
    int rup[]={2000,500,200,100,50,20,10,5,2,1};
    int a,b=0;
    for(int i=0;i<10;i++)
    {
        if(n>=rup[i]);
        {
            a=n/rup[i];
            b=b+a;
            printf("\n %d:%d",rup[i],b);
            n=n%rup[i];
            b=b-a;
        }
    }
}
int main()
{
    int n;
    printf("Enter amonut :");
    scanf("%d",&n);
    count(n);
}