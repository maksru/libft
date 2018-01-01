/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:45:43 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 20:17:35 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *hays, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	if (*need == '\0')
		return ((char *)hays);
	i = 0;
	while (hays[i] != '\0' && i < len)
	{
		if (hays[i] == need[0])
		{
			j = 1;
			while (hays[i + j] == need[j] && need[j] != '\0' && i + j < len)
			{
				j++;
			}
			if (need[j] == '\0')
				return ((char *)(hays + i));
		}
		i++;
	}
	return (NULL);
}
