/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:40:32 by dserhiei          #+#    #+#             */
/*   Updated: 2024/04/21 19:25:15 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	test_chars[] = {'a', '5', '9', '!', '0', 'Z', '7'};
	int	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int	standard_result = isalpha(test_chars[i]);
		int	custom_result = ft_isalpha(test_chars[i]);

		if (standard_result == custom_result)
		{
			if (custom_result)
				printf("%c is an alphabet letter.\n", test_chars[i]);
			else
				printf("%c is not an alphabet letter.\n", test_chars[i]);
		}
		else
		{
			printf("Mismatch for %c: Standard result: %d, Custom result: %d\n", test_chars[i], standard_result, custom_result);
			return (1);
		}
	}
	return (0);
}
