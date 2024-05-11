#include "libft.h"

int	main(void)
{
	char	test_chars1[] = "  	3245346fygf 565";
	char	test_chars2[] = "  	fygf 565";
	char	test_chars3[] = "fygf 565";
	char	test_chars4[] = "  -67fygf 565";
	char	test_chars5[] = "  +-07fygf 565";

	int	standard_result1 = atoi(test_chars1);
	int	custom_result1 = ft_atoi(test_chars1);
	if (standard_result1 == custom_result1)
		printf("Test passed for: %s Results match for test_chars1. Result: %d\n", test_chars1, custom_result1);
	else
	{
		printf("Mismatch for %s: Standard result: %d, Custom result: %d\n", test_chars1, standard_result1, custom_result1);
		return (1);
	}

	int	standard_result2 = atoi(test_chars2);
	int	custom_result2 = ft_atoi(test_chars2);
	if (standard_result2 == custom_result2)
		printf("Test passed for: %s Results match for test_chars2. Result: %d\n", test_chars2, custom_result2);
	else
	{
		printf("Mismatch for %s: Standard result: %d, Custom result: %d\n", test_chars2, standard_result2, custom_result2);
		return (1);
	}

	int	standard_result3 = atoi(test_chars3);
	int	custom_result3 = ft_atoi(test_chars3);
	if (standard_result3 == custom_result3)
		printf("Test passed for: %s Results match for test_chars3. Result: %d\n", test_chars3, custom_result3);
	else
	{
		printf("Mismatch for %s: Standard result: %d, Custom result: %d\n", test_chars3, standard_result3, custom_result3);
		return (1);
	}

	int	standard_result4 = atoi(test_chars4);
	int	custom_result4 = ft_atoi(test_chars4);
	if (standard_result4 == custom_result4)
		printf("Test passed for: %s Results match for test_chars4. Result: %d\n", test_chars4, custom_result4);
	else
	{
		printf("Mismatch for %s: Standard result: %d, Custom result: %d\n", test_chars4, standard_result4, custom_result4);
		return (1);
	}

	int	standard_result5 = atoi(test_chars5);
	int	custom_result5 = ft_atoi(test_chars5);
	if (standard_result5 == custom_result5)
		printf("Test passed for: %s Results match for test_chars5. Result: %d\n", test_chars5, custom_result5);
	else
	{
		printf("Mismatch for %s: Standard result: %d, Custom result: %d\n", test_chars5, standard_result5, custom_result5);
		return (1);
	}

	return (0);
}
