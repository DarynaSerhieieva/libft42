
#include "libft.h"

char	uppercase_mapping(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

int	main(void)
{
    char	*input_string = "hello";
    char	*expected_result = "HELLO";
    char	*result_string;

	result_string = ft_strmapi(input_string, uppercase_mapping);
	if (result_string == NULL)
	{
		printf("Test failed: Memory allocation failed!\n");
		return (1);
	}

	if (strcmp(result_string, expected_result) != 0)
	{
		printf("Test failed: Results don't match! Expected: %s, Got: %s\n", expected_result, result_string);
		free(result_string);
		return (1);
	}
	
	printf("Test passed: Results match!\n");

	free(result_string);

	return (0);
}