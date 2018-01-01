/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:04:52 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 20:13:34 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	mem;
	int		i;

	mem = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i++] == mem)
			return ((char *)(s + i - 1));
	}
	if (s[i] == mem)
		return ((char *)(s + i));
	return (NULL);
}
