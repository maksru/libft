/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:16:58 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 18:09:31 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*buf;
	unsigned char	*mem;
	unsigned char	k;
	size_t			i;

	buf = (unsigned char *)dst;
	mem = (unsigned char *)src;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		buf[i] = mem[i];
		i++;
		if (k == mem[i - 1])
			return (buf + i);
	}
	return (NULL);
}
