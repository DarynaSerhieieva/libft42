
#include "libft.h"

int main(void)
{
	char test_chars1[] = "I need to change every letter to five";
	char test_chars2[] = "I need to change every letter to five";
	char expected_result = '5';
	size_t array_size = sizeof(test_chars1);

	printf("Before memset:\n%s\n", test_chars1);

	memset(test_chars1, expected_result, array_size);
	ft_memset(test_chars2, expected_result, array_size);

	for (size_t i = 0; i < array_size -1; i++)
	{
		if (test_chars1[i] != test_chars2[i])
		{
			printf("Error at index %zu: expected '%c', got '%c' (ft_memset)\n", i, expected_result, test_chars2[i]);
			return (1);
		}
	}
	printf("Both memset and ft_memset produced the same result:\n%s\n", test_chars1);
	printf("Both memset and ft_memset produced the same result:\n%s\n", test_chars2);

	return (0);
}
