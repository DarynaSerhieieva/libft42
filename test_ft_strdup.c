#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;
	char test_chars[] = "I need to duplicate this line";

	ptr = ft_strdup(test_chars);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array: %s\n", ptr);

	free(ptr);
	return (0);
}
