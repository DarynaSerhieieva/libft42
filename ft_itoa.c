#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	size_int(int n)
{
	size_t	num;
	size_t	i;

	num = 1;
	if (n < 0)
			n = n * -1;
	while (n > num && num * 10 > n)
	{
		i++;
		num = num * 10;
	}
		
	return (i);
}
char	*ft_itoa(int n)
{
	size_t	i;
	size_t	n_size;
	char	*str;

	n_size = size_int(n);
	str = (char *)malloc(n_size * sizeof(char));


}
