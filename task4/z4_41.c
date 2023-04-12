#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day, month, year;
    int days_in_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int is_leap_year=0;
    printf("Enter date (DD MM YYYY) : ");
    scanf("%d %d %d" ,&day,&month,&year);
    
    if (year %4==0)
    {
           if (year%100==0)
             {
                if (year%400==0)
                 {
                   is_leap_year=1;}
                   }
                   }
   
    else
    {
         is_leap_year=1;
         }
}

if ((month<1) || (month>12))
{
   printf("Invalid month\n");
}
             
   else if (day<1||day>days_in_month[month-1]+(month==2&&is_leap_year))
   {
        printf("Invalid day\n");
   }
   else 
   {
        printf("Date is valid\n");
   }     
    
    system("pause");
    return 0; 
}
