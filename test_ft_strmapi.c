#include <stdio.h>
#include <stdlib.h>
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
    char	*result_string;

	result_string = ft_strmapi(input_string, &uppercase_mapping);
	if (result_string == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	printf("Mapped string: %s\n", result_string);

	free(result_string);

	return (0);
}
