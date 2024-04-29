#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;
	char test_chars1[] = "I need to combine to string ";
	char test_chars2[] = "one with another";

	ptr = ft_strjoin(test_chars1, test_chars2);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array: %s\n", ptr);

	free(ptr);
	return (0);
}
