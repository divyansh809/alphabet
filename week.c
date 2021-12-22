#include <stdio.h>
int main()
{
    int num;
    printf("enter a num:\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("it is monday");
    }
    else if (num == 2)
    {
        printf("it is tuesday");
    }
    else if (num == 3)
    {
        printf("it is wednesday");
    }
    else if (num == 4)
    {
        printf("it is thursday");
    }
    else if (num == 5)
    {
        printf("it is friday");
    }
    else if (num == 6)
    {
        printf("it is saturday");
    }
    else
    {
        printf("it is sunday");
    }
    return 0;
}