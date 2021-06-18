#include <stdio.h>
#include <stdlib.h>
int ft_str_is_printable(char *str);

int	main(void)
{
	char *str;
	
	str = calloc(10, sizeof(char));
	str = " ";
	printf("str: %s\nIs_printable: %d\n", str, ft_str_is_printable(str));
	return (0);
}
