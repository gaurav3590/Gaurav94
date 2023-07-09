// switch case  --> same as ladder if else 
// case  --> int or char
#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter Value of A :");
    scanf("%d",&a);
    printf("Enter Value of B :");
    scanf("%d",&b);

    printf("1. Adiition\n2. substraction\n3. Multiplication\n4. Division");
    printf("\nEnter Your Choice :");
    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1:
        printf("Addition of A and B is : %d",a+b);
        break;
    case 2:
        printf("\nsubstraction of A and B is : %d",a-b);
        break;
    case 3:
        printf("\nMultiplication of A and B is : %d",a*b);
        break;
    case 4:
        printf("\nDivision of A and B is : %d",a/b);
        break;
    
    default:
    printf("\n Wrong Choice.....");
        break;
    }
}