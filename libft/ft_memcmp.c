/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:46:51 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/21 13:53:27 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf;
	unsigned char	*mem;
	size_t			i;

	buf = (unsigned char *)s1;
	mem = (unsigned char *)s2;
	if (!buf && !mem && !n)
		return (0);
	i = 0;
	while (i < n)
	{
		if (buf[i] != mem[i])
			return (buf[i] - mem[i]);
		i++;
	}
	return (0);
}
