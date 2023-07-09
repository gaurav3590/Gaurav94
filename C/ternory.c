#include<stdio.h>
int main()
{
	int a=200,b=800,c=100;
	printf("largest no. : %d",(a>b ? a:b) > c ? (a>b ? a:b) : c);
}