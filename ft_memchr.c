/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:28:00 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:28:02 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(char *)(s + i) != c)
		i++;
	if (*(char *)(s + i) == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
