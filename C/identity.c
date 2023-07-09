#include<stdio.h>
void main()
{
	int i,j,a[5][5],x=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i==j)
			{
			printf(" 1 ");
			}
		else	
			{
			printf(" 0 ");
			}
		}
	printf("\n");
	}
}