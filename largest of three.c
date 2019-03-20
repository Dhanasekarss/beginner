#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
        printf("a=%d is largest",a);
    else if(b>c)
        printf("b=%d is largest",b);
    else
    printf("c=%d is largest",c);

    getch();
}
