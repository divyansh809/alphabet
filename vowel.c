#include<stdio.h>
int main()
{ char ch;
    printf("enter an alphabet:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("you entered a vowel");
    }
    else{
        printf("you entered a constant");
    }
    return 0;
}
