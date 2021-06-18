#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "aBcdEfGhi";

	printf("Before: %s\n", str);
	ft_strupcase(str);
	printf("After: %s\n", str);

	return (0);
}
