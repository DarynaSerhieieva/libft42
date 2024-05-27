
#include "libft.h"

#define SIZE 10

int	main(void)
{
	char	src[] = "1234567890457574575";
	char	dest_ft[SIZE];
    size_t    res;

	res = ft_strlcpy(dest_ft, src, sizeof(dest_ft)); 
	if (res == ft_strlen(src))
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
