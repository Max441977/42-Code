#include <stdio.h>
#include <stdlib.h>
int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	
	str = calloc(10, sizeof(char));
	str = "ABCDEF";
	printf("str: %s\nIs_uppercase: %d\n", str, ft_str_is_uppercase(str));
	return (0);
}
