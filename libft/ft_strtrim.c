/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:19:58 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/22 15:41:09 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_newlen(char const *s)
{
	size_t	len;

	len = ft_strlen(s);
	while (ft_isspace(*s))
	{
		len--;
		s++;
	}
	while (*s != '\0')
		s++;
	s--;
	if (len)
		while (ft_isspace(*s))
		{
			len--;
			s--;
		}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t	len;
	char	*new;
	char	*res;

	if (s == NULL)
		return (NULL);
	len = ft_newlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	res = new;
	while (ft_isspace(*s))
		s++;
	while (len--)
		*new++ = *s++;
	*new = '\0';
	return (res);
}
