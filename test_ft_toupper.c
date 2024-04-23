#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	test_chars[] = {'t', '1', 'B', '$', 'H', '?', ' ', '\n', 'a', 'F', 's'};
	int	custom_result;
	int	standard_result;

	for (int i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); ++i)
	{
		custom_result = ft_toupper(test_chars[i]);
		standard_result = toupper(test_chars[i]);
		if (custom_result != standard_result)
		{
			printf("Mismatch for character '%c': Custom: %d, Standard: %d\n", test_chars[i], custom_result, standard_result);
			return (1);
		}
	}

	printf("Test passed: Results match ft_toupper!\n");

	return (0);
}
