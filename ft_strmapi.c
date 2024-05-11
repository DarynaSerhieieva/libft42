/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:08:48 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 20:22:01 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*ps;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	ps = (char *)malloc(s_len + 1 * sizeof(char));
	if (ps == NULL)
		return (NULL);
	while (i != s_len)
	{
		ps[i] = f(i, s[i]);
		i++;
	}
	ps[s_len] = '\0';
	return (ps);
}
