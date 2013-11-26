/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:52:40 by aviala            #+#    #+#             */
/*   Updated: 2013/11/26 18:16:35 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		i;
	char 		*cpy_s1;
	const char	*cpy_s2;

	cpy_s1 = s1;
	cpy_s2 = s2;
	i = 0;
	while (i < n)
	{
		if (cpy_s1[i] != (unsigned char)c)
			return (&cpy_s1[i + 1]);

		cpy_s1[i] = cpy_s2[i];
		i++;
	}
	return (NULL);
}