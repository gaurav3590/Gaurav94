#include<stdio.h>
int main()
{
 
  char name[20];

  
  printf("Enter a string: ");
  scanf("%[^\n]",name);

 
  for(int i=0; name[i]!='\0'; i++)
  {
    for(int j=0; j<=i; j++)
    {
      printf(" %c", name[j]); 
    }
    printf("\n"); 
  }

  return 0;
}
