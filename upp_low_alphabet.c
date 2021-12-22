#include <stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("the alphabet you entered is a uppercase ");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("the alphabet you entered is a lowercase");
    }
    else
    {
        printf("you entered a number or a special char");
    }
    return 0;
}