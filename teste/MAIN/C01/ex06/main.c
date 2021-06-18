#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *str = "VIVA A VIDA!";
	int	j;

	j = ft_strlen(str);
	printf ("Esse é o tamanho da string = %d\n", j);

	return (0);
}
