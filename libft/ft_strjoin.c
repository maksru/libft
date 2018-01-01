/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:09:07 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 20:21:49 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*rezult;
	size_t	len;
	int		i;
	int		j;

	len = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((rezult = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		rezult[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		rezult[i + j] = s2[j];
		j++;
	}
	rezult[i + j] = '\0';
	return (rezult);
}
