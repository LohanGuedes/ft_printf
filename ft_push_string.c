#include "ft_printf.h"

int	ft_push_string(va_list args)
{
	char	*string;

	string = va_arg(args, char *);
	if(!string)
	{
		ft_putstr_fd("(NULL)", 1);
		return (6);
	}
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
