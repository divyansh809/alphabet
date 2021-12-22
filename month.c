#include<stdio.h>
int main()
{ int month_num;
    printf("enter the month number:\n");
    scanf("%d",&month_num);
    if(month_num==1||month_num==3||month_num==5||month_num==7||month_num==8||month_num==10||month_num==12)
    {
        printf("\n the no of days is 31 ");
    }
    else if(month_num==2)
    {
        printf("\n no of days is 28 and in leap year it is 29");
    }
    else
    {
        printf("\n no of days is 30");
    }
    return 0;
}