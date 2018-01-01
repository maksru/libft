/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:18:10 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/23 20:19:47 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	mem;
	int		i;
	char	*rez;

	mem = (char)c;
	i = 0;
	rez = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == mem)
			rez = (char *)&(s[i]);
		i++;
	}
	if (s[i] == mem)
		rez = (char *)&(s[i]);
	return (rez);
}
