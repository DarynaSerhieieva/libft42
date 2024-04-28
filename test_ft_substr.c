#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;
	char test_chars[] = "I need to creat substring of this line";

	ptr = ft_substr(test_chars, 3, 14);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array: %s\n", ptr);

	free(ptr);
	return (0);
}
