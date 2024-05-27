
#include "libft.h"

int	main(void)
{
	char	str1[] = "This is another test string.";
	char	str2[] = "This is a test string.";
	size_t	n = strlen(str1);

	// Using ft_memcmp
	int	ft_result = ft_memcmp(str1, str2, n);

	// Using memcmp
	int	std_result = memcmp(str1, str2, n);

	// Printing results
	printf("Result of ft_memcmp: %d\n", ft_result);
	printf("Result of memcmp: %d\n", std_result);

	// Comparing results
	if (ft_result == std_result || (std_result > 0 && ft_result == 1) || (std_result < 0 && ft_result == -1))
	{
		printf("Results are the same.\n");
		return (0);
	}
	else
	{
		printf("Results are different.\n");
		return (1);
	}
}
