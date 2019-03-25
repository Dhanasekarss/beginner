#include<stdio.h>
void main()
{
  int n, i, Sum = 0;
  
  printf("Enter a number:");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  getch();
}
