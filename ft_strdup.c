/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:28:49 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:28:51 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	str_dup = (char *)malloc(sizeof(*s) * len);
	if (str_dup == NULL)
		return (NULL);
	ft_strlcpy(str_dup, s, len);
	return (str_dup);
}
