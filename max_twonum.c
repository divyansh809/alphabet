#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers:\n");
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        printf("a is greater than b %d",a);
    }
    else
    {
        printf("b is greater than a %d",b);
    }
    return 0;
}