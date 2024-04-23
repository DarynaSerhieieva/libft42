#include <stdio.h>
#include <string.h>
#include "libft.h"

#define SIZE 10

int	main(void)
{
	char	src[] = "1234567890457574575";
	char	dest_ft[SIZE];
	char	dest_std[SIZE];
    size_t    res1;
    size_t    res2;

	res1 = ft_strlcpy(dest_ft, src, sizeof(dest_ft));
	res2 = strlcpy(dest_std, src, sizeof(dest_std)); 
	if (res1 == res2)
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
