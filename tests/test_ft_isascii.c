
#include "libft.h"

int	main(void)
{
	char    test_chars[] = {'$', '5', '9', '!', '0', 'Z', '7', '\xFF', '\0'};
	int	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int	standard_result = isascii(test_chars[i]);
		int	custom_result = ft_isascii(test_chars[i]);

		if (standard_result == custom_result)
		{
			if (custom_result)
				printf("%c is a isascii.\n", test_chars[i]);
			else
				printf("%c is not a isascii.\n", test_chars[i]);
		}
		else
		{
			printf("Mismatch for %c: Standard result: %d, Custom result: %d\n", test_chars[i], standard_result, custom_result);
			return (1);
		}
	}

	return (0);
}
