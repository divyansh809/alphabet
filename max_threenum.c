#include<stdio.h>
int main()
{ int a,b,c;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greates among three");
    }
    else if(b>a&&b>c)
    {
        printf("b is greatest among three");
    } 
    else
    {
        printf("c is greatest amongst three");
    }
    return 0;
}