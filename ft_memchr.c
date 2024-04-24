#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(char *)(s + i) != c)
		i++;
	if (*(char *)(s + i) == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
