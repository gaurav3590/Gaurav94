#include <stdio.h>
#define n 5
int a[n];
int top = -1;
void dis()
{
	if (top < 0)
		printf("Array is empty....");
	else
	{
		for (int i = 0; i <= top; i++)
			printf("%d ", a[i]);
	}
	printf("\n");
}

int insertFirst(int val)
{
	if (top >= n - 1)
		printf("\nArray is Full...");
	else if (top == -1)
	{
		a[++top] = val;
	}
	else
	{                                                                               
		for (int i = n - 1; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = val;
		++top;
	}
}

void insertmid(int val)
{
	if (top >= n - 1)
		printf("\nArray is Full...");
	else

	{
		for (int i = n; i >= (n / 2); i--)
		{
			a[i] = a[i - 1];
		}
		a[n / 2] = val;
		++top;
	}
}

int insertEnd(int val)
{
	if (top >= n - 1)
		printf("\nArray is Full...");
	else
		a[++top] = val;
}

int firstdelete()
{
	if (top < 0)
		printf("\nArray is Empty...");
	else
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = a[i + 1];
		}
		--top;
	}
}
int deletEnd()
{
	if (top < 0)
		printf("\nArray is Empty...");
	else
		a[--top];
}
int deletemid()
{
	if (top <= 0)
		printf("\nArray is Empty...");
	else
	{
		for (int i = n / 2; i < n / 2; i++)
		{
			a[i] = a[i + 1];
		}
		--top;
	}
}
int main()
{
	int ch, a;
	printf("1. Insert at FIRST");
	printf("\n2. Insert at MIDDEL");
	printf("\n3. Insert at END");
	printf("\n4. Delete at FIRST");
	printf("\n5. Delete at MIDDEL");
	printf("\n6. Delete at END");
	printf("\n7. Display Array");

	do
	{
		printf("\nEnter choice: ");
		scanf("%d", &ch);
		switch (ch) 
		{
		case 1:
			printf("Enter element: ");
			scanf("%d", &a);
			insertFirst(a);
			break;
		case 2:
			printf("Enter element: ");
			scanf("%d", &a);
			insertmid(a);
			break;
		case 3:
			printf("Enter element: ");
			scanf("%d", &a);
			insertEnd(a);
			break;
		case 4:
			firstdelete();
			break;

		case 5:
			deletemid();
			break;

		case 6:
			deletEnd();
			break;

		case 7:
			dis();
			break;
		case 0:
			break;
		default:
			printf("Wrong Number Selected");
			break;
		}
	} while (ch != 0);
}