#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:\n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("the number you entered is positive");
    }
    else if (num == 0)
    {
        printf("the number you entered is zero");
    }
    else
    {
        printf("the number you entered is a negative");
    }
    return 0;
}