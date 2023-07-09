#include<stdio.h>
int main()
{
  int a,b,c,*x,*y;
  printf("Enter the value of x and y :\n");
  scanf("%d%d",&a,&b);

  printf("Before Swapping \nx = %d \ny = %d\n",a,b);

  x = &a;
  y = &b;

  c = *y;
  *y = *x;
  *x = c;

  printf("After Swapping \nx = %d\ny = %d\n",a,b);

} 