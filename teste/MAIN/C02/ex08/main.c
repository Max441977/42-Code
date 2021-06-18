#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "aBcdeFghi";

	printf("Before: %s\n", str);
	ft_strlowcase(str);
	printf("After: %s\n", str);
	return (0);
}
