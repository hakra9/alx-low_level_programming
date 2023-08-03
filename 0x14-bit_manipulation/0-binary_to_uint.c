#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*binary_to_uint - return the number of binaru code
 * @nu : the number
 * returne : the number converte
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int nu= 0 ;
	if (!b)
		return (0);
	while(*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		nu= nu * 2 + (*b++ -'0');
	}
	return (nu);
}
