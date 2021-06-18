#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*dest;
	char	*src;
	unsigned int	n;

	src = calloc(11, sizeof(char));
	src = "Bom dia.";
	n = 3;
	dest = calloc(11, sizeof(char));
	ft_strncpy(dest, src, n);
	printf("Source: %s\nSize: %u\nDestiny: %s\n", src, n, dest);
	return (0);
}
