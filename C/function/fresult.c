// no argument no return
#include<stdio.h>
void entermark()
{
	int maths,hindi, english,total,per;
	 
	printf("maths = ");
	scanf("%d",&maths);
	printf("hindi = ");
	scanf("%d",&hindi);
	printf("english = ");
	scanf("%d",&english);
	
	total=maths+hindi+english;
	printf("total = %d",total);

	per=total/3;
	printf("\npercantage = %d",per);
}
int main()
{
	entermark();
}