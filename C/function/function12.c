// result with local variable using function
#include<stdio.h>
void result(int a,int b,int c,int total,float per)
{
    printf("Maths\tScience\tEnglish\tTotal\tPercantage\tGrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",a,b,c,total,per);
    if (per<35 || a<35 || b<35 || c<35)
			{
				printf("\t\t FAIL");
			}
		else if (per>=75)
			{
				printf("\t\t Garde A");
			}
		else if (per >=60 && per<75)
			{
				printf("\t\t Garde B");
			}
		else if (per >=50 && per<60)
			{
				printf("\t\t Garde C");
			}
		else if (per >=35 && per<50)
			{
				printf("\t\t Grade D");
			}
}
void calc(int a,int b, int c)
{
    int total;
    float per;
    total = a+b+c;
    per = (float) total / 3;
    result(a,b,c,total,per);
}
void setdata()
{
    int a,b,c;
    printf("enter maths :");
    scanf("%d",&a);
    printf("enter science :");
    scanf("%d",&b);
    printf("enter english :");
    scanf("%d",&c);
    calc(a,b,c);
}
int main()
{
    setdata();
}