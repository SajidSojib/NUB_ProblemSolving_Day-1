#include <stdio.h>
int main()
{
    int n,year,week,day;
    printf("Enter number of days : ");
    scanf("%d",&n);

    year = n/365;
    week = n%365/7;
    day = n%365%7;
    
    printf("Year : %d\n",year);
    printf("Week : %d\n",week);
    printf("Day  : %d\n",day);
    return 0;
}