#include <stdio.h>
int main()
{
    int num;
    printf("plzz enter a number:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the number you entered is even");
    }
    else
    {
        printf("the number you entered is an odd number");
    }
    return 0;
}