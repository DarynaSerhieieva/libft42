#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	ch;

	ch = 'A';
	if (ft_isalpha(ch))
	{
		printf("%c is an alphabet letter.\n", ch);
	}
	else
	{
		printf("%c is not an alphabet letter.\n", ch);
	}
	return (0);
}
