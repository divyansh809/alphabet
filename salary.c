#include<stdio.h>
int main()
{ int HRA,DA,tot_sal,salary;
    printf("enter the basic salary of an employee:\n");
    scanf("%d",&salary);
    if(salary<=10000)
{
    HRA=((salary*20)/100);
    DA=((salary*80)/100);
    tot_sal=(salary+HRA+DA);
    printf("total salary of an employee is:%d\n",tot_sal);
}
else if(salary<=20000)
{
    HRA=((salary*25)/100);
    DA=((salary*90)/100);
    tot_sal=(salary+HRA+DA);
     printf("total salary of an employee is:%d\n",tot_sal);
}
else
{
    HRA=((salary*30)/100);
    DA=((salary*95)/100);
    tot_sal=(salary+HRA+DA);
     printf("total salary of an employee is:%d\n",tot_sal);
}
return 0;
}