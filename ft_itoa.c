/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:27:40 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:54:18 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	size_int(int n)
{
	int	num;
	int	temp;

	temp = n;
	num = 0;
	if (temp == 0)
		num = 1;
	else if (n < 0)
	{
		num++;
		temp = -temp;
	}
	while (temp != 0)
	{
		num++;
		temp /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*result;

	unsigned
		int i;
	unsigned
		int num;
	num = size_int(n);
	result = (char *)malloc(num + 1 * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	i = num - 1;
	while (n != 0)
	{
		result[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	result[num] = '\0';
	return (result);
}
