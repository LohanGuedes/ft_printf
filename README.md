<h1 align="center">Welcome to ft_printf 👋</h1>
<p>🖨 Recreating printf function of C programming language</p>

---

- Status: Finished
- Result: 104%

---

## Install

```sh
git clone https://github.com/peguimasid/42-Printf ft_printf
```

## Usage

1. For including the function to your project, you just need to add the header `#include "ft_printf.h"`.

```C
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %d | %s", 42, "World!");
}
```

## Run

```sh
make -s && cc main.c ./libft/libftprintf.a ./libft/libft && ./a.out && rm ./a.out && make -s fclean
```
## Author

👤 **Lohan Guedes**

- Github: [@lguedes](https://github.com/lohanguedes)
- LinkedIn: [@lohan-guedes](https://www.linkedin.com/in/lohan-guedes-0349b5239/)

## Show your support

Feel free to fork this project and send a pull request to it! I would love to see possible improvements :mending_heart:.
Give a ⭐️ if this project helped you!
