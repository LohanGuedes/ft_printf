#include "ft_printf.h"

/*
 * checks if the following char is a valid Placeholder.
 */
int ft_isplaceholder(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'd' || c == '%')
		return (1);
	else
		return (0);
}
