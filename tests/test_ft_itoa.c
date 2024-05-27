
#include "libft.h"

int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	int test_num1 = 354;
	int test_num2 = -6558;

	ptr1 = ft_itoa(test_num1);
	ptr2 = ft_itoa(test_num2);
	if (ptr1 == NULL)
	{
		printf("Memory allocation failed for ptr1.\n");
		return (1);
	}
    if (ptr2 == NULL)
	{
		printf("Memory allocation failed for ptr2.\n");
		return (1);
	}

	printf("Allocated array: %s\n", ptr1);
	printf("Allocated array: %s\n", ptr2);

	free(ptr1);
	free(ptr2);
	return (0);
}
