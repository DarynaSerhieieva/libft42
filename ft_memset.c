/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei <dserhiei@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:54:53 by dserhiei          #+#    #+#             */
/*   Updated: 2024/04/19 20:32:25 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	ptr = s;
	uc = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = uc;
		i++;
	}

	return (s);
}
