
#include "libft.h"

#define SIZE 10

int	main(void)
{
	char	src[] = "1234567890457574575";
	char	dest_ft[SIZE];
	size_t	res;
	size_t	expected_len;

	expected_len = strlen(src) + strlen(dest_ft);
	res = ft_strlcat(dest_ft, src, sizeof(dest_ft));

	if (res == expected_len)
	{
		printf("Test passed: Results match!\n");
	}
	else
	{
		printf("Test failed: Results don't match! Custom: %zu, Expected: %zu\n", res, expected_len);
		return (1);
	}

	return (0);
}
