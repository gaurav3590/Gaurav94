#include<stdio.h>
void main()
{
	int i,j,a[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
			printf("  ");
			}		
			else if(a[i][j]!=0)
			{
			printf("%d ",a[i][j]);
			}
		}
	printf("\n");
	}
}