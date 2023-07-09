// reverse charecter in string
#include<stdio.h>
void main()
{
	char str[20],rev[20];	
	printf("enter string : ");
	scanf("%[^\n]s",str);
	printf("\nyour string is =%s",str);
	int i;
	for(i=0; str[i] !='\0'; i++);
	printf("\nyour length is =%d",i);
	
	int k=i;
	for( int j=0;j<i;j++)
	{
	rev[j]=str[--k];
	}
	rev[i]='\0';
	printf("\nrevers string :%s",rev);
}
