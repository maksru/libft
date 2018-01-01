/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:33:54 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 17:46:49 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *buf;
	unsigned char *mem;

	buf = (unsigned char *)dst;
	mem = (unsigned char *)src;
	if (src >= dst)
		while (len--)
			*buf++ = *mem++;
	else
	{
		buf = buf + len - 1;
		mem = mem + len - 1;
		while (len--)
			*buf-- = *mem--;
	}
	return (dst);
}
