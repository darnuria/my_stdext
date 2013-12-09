/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:55:40 by aviala            #+#    #+#             */
/*   Updated: 2013/12/01 21:01:38 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t	ft_gety(const char *s, const char sep)
{
	size_t	y;
	size_t	i;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == sep && s[i] != '\0')
		{
			i++;
		}
		if (s[i] != sep && s[i] != '\0')
			y++;
		while (s[i] != sep && s[i] != '\0')
		{
			i++;
		}
	}
	return (y);
}

static size_t	ft_strpos(const char *s, const char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char **ft_strnew2d(size_t len)
{
	char	**new_str;

	if ((new_str = (char **) malloc(sizeof(char *) * len + 1)) == NULL)
		return (NULL);
	ft_bzero(new_str, len);
	return (new_str);
}

char		**ft_strsplit(const char *s, const char c)
{
	char	**dest;
	size_t	y;
	size_t	x;
	size_t	pos;
	size_t	i;

	i = 0;
	y = ft_gety(s, c);
	if ((dest = ft_strnew2d(y)) == NULL)
		return (NULL);
	dest[y] = '\0';
	x = 0;
	while (i < y)
	{
		while (s[x] == c)
			x++;
		pos = ft_strpos(&s[x], c);
		dest[i] = ft_strsub(s, x, pos);
		x += pos;
		i++;
	}
	return (dest);
}