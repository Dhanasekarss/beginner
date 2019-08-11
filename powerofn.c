#include <stdio.h>
#include<conio.h>
int main()
{
    int base, exponent,result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    if(base >=0 && base <=0)
    {
        while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("Power of N = %d", result);
        
    }
    else
    {
    printf("\n INVALID INPUT ");
    }
getch();

}
