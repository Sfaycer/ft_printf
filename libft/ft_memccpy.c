/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarisa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:59:55 by dkarisa           #+#    #+#             */
/*   Updated: 2020/11/21 06:12:21 by dkarisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	unsigned char symbol;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	symbol = (unsigned char)c;
	while (n--)
	{
		if ((*pdst++ = *psrc++) == symbol)
			return (pdst);
	}
	return (0);
}
