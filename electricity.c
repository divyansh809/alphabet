#include <stdio.h>
int main()
{
    int units;
    float bill, tot_bill, surcharge;
    printf("enter the number of units of electricity bill : \n");
    scanf("%d", &units);
    if (units <= 50)
    {
        bill = (units * 0.50);
        bill=bill+(bill*0.2);
        printf("bill is: %f", bill);
    }
    else if (units <= 150)
    {
        bill = 25+((units-50) * 0.75);
        bill=bill+(bill*0.2);
        printf("bill is: %f", bill); 
    }
    else if (units <= 250)
    {
        bill = 25+75+((units-150) * 1.20);
        bill=bill+(bill*0.2);
        printf("bill is: %f", bill);
    }
    else
    {
        bill = (units * 1.50);
        bill=bill+(bill*0.2);
        printf("bill is: %f", bill);
    }
    return 0;
}