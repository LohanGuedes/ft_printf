#ifndef FT_PRINTF_H_
# define FT_PRINTF_H_

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char *string, ...);

int	ft_isplaceholder(char c);

int	ft_push_right(char c, va_list args);

int	ft_digit_count(long long num, int base);

int	ft_push_char(va_list args);

int	ft_push_string(va_list args);

int	ft_push_decimal(va_list args);

int	ft_push_pointer(va_list args);

int	ft_push_hex_lower(va_list args);

int	ft_push_hex_upper(va_list args);

int	ft_push_percent(void);

int	ft_push_unsigned_decimal(va_list args);

#endif // FT_PRINTF_H_
