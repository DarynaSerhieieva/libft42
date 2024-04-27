#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	*ptr;

	ptr = (int *)ft_calloc(5, sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", ptr[i]);
	printf("\n");

	free(ptr);
	return (0);
}
