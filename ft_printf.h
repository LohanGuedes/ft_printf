#ifndef FT_PRINTF_H_
# define FT_PRINTF_H_

# include "libft/libft.h"
# include <stdarg.h>

int	ft_isplaceholder(char c);
int	ft_push_right(char c, va_list args);
int	ft_push_char(va_list args);
int	ft_push_string(va_list args);

#endif // FT_PRINTF_H_
