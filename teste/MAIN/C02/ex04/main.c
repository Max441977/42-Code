#include <stdio.h>
#include <stdlib.h>
int ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str;
	
	str = calloc(10, sizeof(char));
	str = "abcdefgHij";
	printf("str: %s\nIs_lowercase: %d\n", str, ft_str_is_lowercase(str));
	return (0);
}
