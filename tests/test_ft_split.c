
#include "libft.h"

int	main(void)
{
	int	i;
	char	**ptr;
	char test_chars[] = " I need  to split this line  ";
	char delimiter = ' ';

	ptr = ft_split(test_chars, delimiter);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array:\n");
	i = 0;
	while (ptr[i] != NULL)
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
