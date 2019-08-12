#include<stdio.h> 
 
int main()
{       
    int base, exponent, result = 1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    int i = 1;
    
    while(i <= exponent)
    {
        result *= base;
        i++;
    }
    printf("%d to the power of %d is= %d", base,exponent, result);
    getch();
}
