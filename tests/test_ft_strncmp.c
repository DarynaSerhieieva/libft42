
#include "libft.h"

int	main(void)
{
	const char	str1[] = "Hello world";
	const char	str2[] = "Hello";
	int	standard_result = strncmp(str1, str2, 2);
    int	custom_result = ft_strncmp(str1, str2, 2);

	if (standard_result == custom_result)
	{
		if (custom_result == -1)
			printf("str1 is less than str2.\n");
		if (custom_result == 1)
			printf("str1 is greater than str2.\n");
		else
			printf("str1 and str2 are equal,.\n");
	}
	else
	{
		printf("Mismatch for standard result: %u, Custom result: %u\n", standard_result, custom_result);
		return (1);
	}

	return (0);
}
