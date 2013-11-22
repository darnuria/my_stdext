/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:00:04 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 13:59:53 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;
	size_t			i;

	if (b == 0)
		return (0);
	pb = b;
	while (i < len)
	{
		pb[i] = (unsigned char)c;
		i++;
	}
	return (pb);
}
