
#include "libft.h"

int	main(void)
{
	char	*ptr;
	char test_chars[] = "test";

	ptr = ft_substr(test_chars, 10, 1);
	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Allocated array: %s\n", ptr);

	free(ptr);
	return (0);
}
