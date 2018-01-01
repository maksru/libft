/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:15:45 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 17:43:36 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t l;

	l = ft_strlen(dst);
	if (dstsize > l)
		ft_strncat(dst, src, (dstsize - l - 1));
	if (dstsize < l)
		return (dstsize + ft_strlen(src));
	return (l + ft_strlen(src));
}
