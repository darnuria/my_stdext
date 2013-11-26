/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:49:09 by aviala            #+#    #+#             */
/*   Updated: 2013/11/22 13:55:19 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strcpy(char *s1, const char *s2)
{
	return ((s1 == 0 || s2 == 0) ? 0 : ft_strncpy(s1, s2, ft_strlen(s2)));
}