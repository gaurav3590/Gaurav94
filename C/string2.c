#include<stdio.h>
void main()
{
	char a[30],b[30];
	printf("Enter String 1 : ");
	gets(a);
	printf("Enter String 2 : ");
	gets(b);
	
	int i,j;
	for(i=0;a[i] !='\0' ;i++);
	for(j=0;a[j] !='\0' ;j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("\nyour string is: %s",a);
}