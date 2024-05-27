
#include "libft.h"

#define SIZE 10

int	main(void)
{
	char	src[SIZE] = "maybe need";
	char	dest_ft[SIZE];
	char	dest_std[SIZE];

	ft_memmove(dest_ft, src, 5);
	dest_ft[5] = '\0';
	printf("After ft_memmove: %s\n", dest_ft);

	memmove(dest_std, src, 5);
	dest_std[5] = '\0';
	printf("After memmove: %s\n", dest_std);

	if (strcmp(dest_ft, dest_std) == 0)
	{
		printf("Test passed: Results match!\n");
	}
	else
	{
		printf("Test failed: Results don't match!\n");
		return (1);
	}

	return (0);
}
