#include "ft_printf.h"

int	ft_push_percent(void)
{
	write(1, "%", 1);
	return (1);
}
