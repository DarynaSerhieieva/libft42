/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserhiei < dserhiei@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:29:35 by dserhiei          #+#    #+#             */
/*   Updated: 2024/05/05 19:29:36 by dserhiei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	c_ind;

	i = 0;
	c_ind = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			c_ind = i;
		i++;
	}
	if (c_ind != -1)
		return ((char *)&s[c_ind]);
	else
		return (NULL);
}
