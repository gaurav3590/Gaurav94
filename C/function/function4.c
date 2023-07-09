#include <stdio.h>
int reverse(int n) 
{
  int b = 0, remainder;
  
  while (n != 0) 
  {
    remainder = n % 10;
    b = b * 10 + remainder;
    n = n/10;
  }
  return b;
}
int main()
{
    int n,a;
    printf("Enetr Number :");
    scanf("%d",&n);
    a = reverse(n);
    printf("reverse number is %d",a);
}