#include <stdio.h>
#include <stdlib.h>
int ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	
	str = calloc(10, sizeof(char));
	str = "012a456789";
	printf("str: %s\nIs_numeric: %d\n", str, ft_str_is_numeric(str));
	return (0);
}
