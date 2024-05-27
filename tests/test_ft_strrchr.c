
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello, world!";
	char	*ptr_st;
	char	*ptr_cus;

	ptr_st = strrchr(str, 'o');
	ptr_cus = ft_strrchr(str, 'o');

	if (ptr_st == ptr_cus)
	{
		if (ptr_st != NULL)
			printf("Test passed: Results match! Found at last occurrence: %ld\n", ptr_st - str);
		else
			printf("Test passed: Results match! Character not found.\n");
	}
	else
	{
		printf("Mismatch for standard result: %s, Custom result: %s\n", ptr_st, ptr_cus);
		return (1);
	}

	return (0);
}
