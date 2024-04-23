/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:23:49 by dserhiei          #+#    #+#             */
/*   Updated: 2024/04/23 16:11:04 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	test_chars[] = {'$', '5', '9', '!', '0', 'Z', '7'};
	int	num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

	for (int i = 0; i < num_tests; i++)
	{
		int	standard_result = isalnum(test_chars[i]);
		int	custom_result = ft_isalnum(test_chars[i]);

		if (standard_result == custom_result)
		{
			if (custom_result)
				printf("%c is a isalnum.\n", test_chars[i]);
			else
				printf("%c is not a isalnum.\n", test_chars[i]);
		}
		else
		{
			printf("Mismatch for %c: Standard result: %d, Custom result: %d\n", test_chars[i], standard_result, custom_result);
			return (1);
		}
	}

	return (0);
}
