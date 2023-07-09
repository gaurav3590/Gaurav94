// result with globle variable using function
#include<stdio.h>
int a,b,c,total;
float per;      //globle variable
void setdata()
{
    printf("Enter Maths :");
    scanf("%d",&a);
    printf("Enter Science :");
    scanf("%d",&b);
    printf("Enter English :");
    scanf("%d",&c);
}
void calc()
{
    total = a + b + c;
    per = total / 3;
}
void result()
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
int main()
{
    setdata();
    calc();
    result();
}