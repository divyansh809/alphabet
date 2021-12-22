#include <stdio.h>
int main()
{
    int num;
    printf("enter a num:\n");
    scanf("%d",&num);
    if (num % 5 == 0)
    {
        printf("the number is divisible by 5");
    }
    else if (num % 11 == 0)
    {
        printf("the number is divisible by 11");
    }
    else
    {
        printf("the number is neither divisible by  nor 11");
    }
    return 0;
}