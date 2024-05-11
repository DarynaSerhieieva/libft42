
#include "libft.h"

int	main(void)
{
	char	test_chars[] = {'a', '5', '9', '!', '0', 'Z', '7'};
	int	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int	standard_result = isdigit(test_chars[i]);
		int	custom_result = ft_isdigit(test_chars[i]);

		if (standard_result == custom_result || (standard_result == 2048 && custom_result == 1))
		{
			if (custom_result)
				printf("%c is a digit.\n", test_chars[i]);
			else
				printf("%c is not a digit.\n", test_chars[i]);
		}
		else
		{
			printf("Mismatch for %c: Standard result: %d, Custom result: %d\n", test_chars[i], standard_result, custom_result);
			return (1);
		}
	}

	return (0);
}
