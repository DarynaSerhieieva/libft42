#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	str1[] = "Do we have Hello world";
	const char	str2[] = "Hello";
	char	*standard_result = strnstr(str1, str2, ft_strlen(str1));
    char	*custom_result = ft_strnstr(str1, str2, ft_strlen(str1));

	if (standard_result == custom_result)
	{
		if (custom_result != NULL)
			printf("All characters of str2 match with consecutive characters in str2.\n");
		else
			printf("The entire str1 string is not matched within the specified str2.\n");
	}
	else
	{
		printf("Mismatch for standard result: %p, Custom result: %p\n", (void *)standard_result, (void *)custom_result);
		return (1);
	}

	return (0);
}
