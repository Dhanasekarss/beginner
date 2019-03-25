#include<conio.h>
 void main()
  {
   int ar[20],i,n,sum=0;
   clrscr();
   printf(" enter the NO of elements: ");
   scanf("%d",&n);
   printf("Enter any %d elements in Array: ",n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&ar[i]);
   }
   printf("Sum of Array Elements is: ");
   for(i=0;i<n;i++)
   {
    sum=sum+ar[i];
   }
   for(i=0;i<n;i++)
   {
   }
  printf("%d",sum);
  getch();
  }
