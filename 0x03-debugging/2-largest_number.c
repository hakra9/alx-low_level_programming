#include "main.h"
int largest_number(int m, int b, int c)
{
int largest;
if (m > b && m> c)
{
largest = m;
}
else if (m > b && c > m)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}


