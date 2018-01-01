/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:05:23 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 18:10:19 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*buf;
	unsigned char	*mem;
	size_t			i;

	buf = (unsigned char *)dst;
	mem = (unsigned char *)src;
	i = 0;
	while (i++ < n)
	{
		buf[i - 1] = mem[i - 1];
	}
	return (buf);
}
