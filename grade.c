#include <stdio.h>
int main()
{
    float perc;
    int m1, m2, m3, m4, m5;
    printf("enter your marks in 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    perc = ((m1 + m2 + m3 + m4 + m5) / 5);
    printf("your percentage is:%d\n", perc);
    if (perc >= 90)
    {
        printf("you got grade 'A'\n");
    }
    else if (perc >= 80 && perc < 90)
    {
        printf("you got grade 'B'\n");
    }
    else if (perc >= 70 && perc < 80)
    {
        printf("you got grade'C'\n");
    }
    else if (perc >= 60 && perc < 70)
    {
        printf("you got grade 'D'\n");
    }
    else if (perc >= 40 && perc < 60)
    {
        printf("you got grade 'E'\n");
    }
    else
    {
        printf("you got grade'F'");
    }
    return 0;
}