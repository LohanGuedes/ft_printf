#include "ft_printf.h"

int	ft_digit_count(long long num, int base)
{
	int digit_count;

	digit_count = 0;
	if(!num)
		return 1;
	while(num != 0)
	{
		digit_count++;
		num /= base;
	}
	return (digit_count);
}
