#include<stdio.h>
void main()
{
	int i[5],j[5],k[5],a,b,c,total,per,grade;
	for (a=0,b=0,c=0;a<5,b<5,c<5;a++,b++,c++)
	{
		printf("maths[%d]: ",a);
		scanf("%d",&i[a]);
		printf("science[%d] : ",b);
		scanf("%d",&j[b]);
		printf("english[%d] : ",c);
		scanf("%d",&k[c]);
	}

	printf("maths   science  english   total   percentage      grade\n---------------------------------------------------------------");
	for (a=0,b=0,c=0;a<5,b<5,c<5;a++,b++,c++)
	{
		printf("\n%d ",i[a]);
		printf("\t%d ",j[b]);	
		printf("\t%d ",j[c]);
	total=i[a]+j[b]+k[c];
	printf("\t   %d",total);
	per=total/3;
	printf("\t    %d",per);

		if (per<35 || i[a]<35 || j[b]<35 || k[c]<35)
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
	printf("\t");
}
	
	

		