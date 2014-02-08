/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviala <aviala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 20:40:43 by aviala            #+#    #+#             */
/*   Updated: 2014/02/08 19:32:24 by aviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ftio.h"

size_t	ft_putnbr(int n)
{
	return (ft_putnbr_fd(n, 1));
}
