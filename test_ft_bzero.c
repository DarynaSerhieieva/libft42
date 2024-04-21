#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char test_chars1[] = "I need to change every letter to zero";
	char test_chars2[] = "I need to change every letter to zero";
	size_t array_size = sizeof(test_chars1);

	printf("Before bzero:\n%s\n", test_chars1);

	bzero(test_chars1, array_size);
	ft_bzero(test_chars2, array_size);

	for (size_t i = 0; i < array_size -1; i++)
	{
		if (test_chars1[i] != test_chars2[i])
		{
			printf("Error at index %zu: expected '0', got '%c' (ft_bzero)\n", i, test_chars2[i]);
			return (1);
		}
	}
	printf("Both bzero and ft_bzero produced the same result\n");

	return (0);
}
