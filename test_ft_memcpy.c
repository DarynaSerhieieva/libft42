#include <stdio.h>
#include <string.h>
#include "libft.h"
int main(void)
{
	char template[] = "I need to copy every letter";
	char standard_copy[sizeof(template)];
	char custom_copy[sizeof(template)];
	size_t array_size = sizeof(template);


	memcpy(standard_copy, template, array_size);
	ft_memcpy(custom_copy, template, array_size);

	for (size_t i = 0; i < array_size -1; i++)
	{
		if (standard_copy[i] != custom_copy[i])
		{
			printf("Error at index %zu: expected '%c', got '%c' (ft_memcpy)\n", i, standard_copy[i], custom_copy[i]);
			return (1);
		}
	}
	printf("Both memcpy and ft_memset produced the same result:\n%s\n", standard_copy);

	return (0);
}
