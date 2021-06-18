#include <stdio.h>
#include <stdlib.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	
	str = calloc(10, sizeof(char));
	str = "Marcilio";
	printf("str: %s\nIs_aplha: %d\n", str, ft_str_is_alpha(str));
	return (0);
}
