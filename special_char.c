#include<stdio.h>
int main()
{char ch;
    printf("enter any alphabet,digit or special char:\n");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
        printf("you entered an alphabet");
    }
    else if(ch>=48&&ch<=57)
    {
        printf("you entered a number");
    }
    else
    {
        printf("you entered a special character");
    }
    return 0;
}