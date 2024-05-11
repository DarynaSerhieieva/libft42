
#include "libft.h"

int	main(void)
{
	const char	test_chars[] = "This length is 17";
    size_t	standard_result = strlen(test_chars);
    size_t	custom_result = ft_strlen(test_chars);

	if (standard_result == custom_result)
	{
		if (custom_result)
		{
			printf("%zu is the length of array.\n", standard_result);
		}
		else
		{
			printf("Arrey is empty.\n");
		}
	}
	else
	{
		printf("Mismatch for standard result: %zu, Custom result: %zu\n", standard_result, custom_result);
		return (1);
	}

	return (0);
}
