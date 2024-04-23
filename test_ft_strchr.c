#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello, world!";
	char	*ptr_st;
	char	*ptr_cus;

	ptr_st = strchr(str, 'o');
	ptr_cus = ft_strchr(str, 'o');

	if (ptr_st == ptr_cus)
	{
		if (ptr_st != NULL)
			printf("Test passed: Results match! Found at position: %ld\n", ptr_st - str);
		else
			printf("Test passed: Results match! Character not found.\n");
	}
	else
	{
		printf("Character not found.\n");
		return (1);
	}

	return (0);
}
