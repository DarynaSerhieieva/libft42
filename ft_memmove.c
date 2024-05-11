/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:12:06 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:20:19 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;

	const
		unsigned char *s;
	d = dst;
	s = src;
	if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
