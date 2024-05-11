/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:29:01 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:31:22 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while (i < dstsize && dst[i] != '\0')
		i++;
	while (src[i - dstlen] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i - dstlen];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}
