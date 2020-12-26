#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leap_years, year1, year2;
    printf("Hello world!\n");
    printf("\n PLease enter the First Year: \n");
    scanf("%d", &year1);

    printf("\n PLease enter the Second Year: \n");
    scanf("%d", &year2);

    leap_years = ((year2/4)- (year2/100) + (year2/400))-((year1/4) - (year1/100)+ (year1/400));

    printf(" The number of leap years between %d and %d are %d ", year1, year2, leap_years);
    return 0;
}
