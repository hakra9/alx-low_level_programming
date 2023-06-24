#include <stdio.h>
#include "main.h"
void print_remaining_days(int mon, int da, int ye)
{
if ((ye % 100 == 0 && ye % 400 == 0) || (ye % 4 == 0))
{
if (mon > 2 && da >= 60)
{
da++;
}
printf("Day of the year: %d\n", da);
printf("Remaining days: %d\n", 366 - da);
}
else
{
if (mon == 2 && da == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", mon, da - 31, ye);
}
else
{
printf("Day of the year: %d\n", da);
printf("Remaining days: %d\n", 365 - da);
}
}
}

