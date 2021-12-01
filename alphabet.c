#include<stdio.h>
int main()
{ char ch;
    printf("enter the alphabet:\n");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {
        printf("you entered a alphabet");
    }
    else
    { 
        printf("you have not entered an alphabet");
    }
    return 0;
}