
#include "libft.h"

int	main(void)
{
	const char	str1[] = "Do we have Hello world";
	const char	str2[] = "Hello";
	char	*standard_result = NULL;
	char	*custom_result = NULL;
	size_t	str1_len = ft_strlen(str1);

	for (size_t i = 0; i < str1_len; i++)
	{
		if (strncmp(&str1[i], str2, ft_strlen(str2)) == 0)
		{
			standard_result = (char *)&str1[i];
			break;
		}
	}

	custom_result = ft_strnstr(str1, str2, str1_len);

	if (standard_result == custom_result)
	{
		if (custom_result != NULL)
			printf("All characters of str2 match with consecutive characters in str1.\n");
		else
			printf("The entire str2 string is not matched within the specified str1.\n");
	}
	else
	{
		printf("Mismatch for standard result: %p, Custom result: %p\n", (void *)standard_result, (void *)custom_result);
		return (1);
	}

	return (0);
}
