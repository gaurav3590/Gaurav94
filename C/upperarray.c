#include<stdio.h>
void main()
{
	int i,j,a[5][5],sum,upper,lower,crose;
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
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	printf("\n");

		upper=a[0][1]+a[0][2]+a[1][2];
		printf("upper=%d ",upper);
		printf("\n");
		lower=a[1][0]+a[2][0]+a[2][1];
		printf("lower=%d ",lower);
		printf("\n");
		crose=a[0][0]+a[1][1]+a[2][2];
		printf("crose=%d",crose);
	printf("\n");
}