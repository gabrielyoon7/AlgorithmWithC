#include<stdio.h>

int main(void)
{
    int x, year;

    printf("\nYear? :");
    scanf("%d", &year);

    x = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if (x == 1)
    {
        printf("it is leap year.\n");
    }
    else
    {
        printf("it is not leap year.\n");
    }

    return 0;

}