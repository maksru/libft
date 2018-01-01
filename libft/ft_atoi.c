/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudyk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:31:47 by mrudyk            #+#    #+#             */
/*   Updated: 2017/11/24 11:36:01 by mrudyk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_LONG_LONG 9223372036854775807

int						ft_atoi(const char *str)
{
	static unsigned long		i;
	unsigned long long			num;
	int							sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' || *(str + i) == '\t'
			|| *(str + i) == '\r' || *(str + i) == '\v'
			|| *(str + i) == '\f' || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (unsigned long long)(num * 10 + (*(str + i++) - '0'));
		if (num > (long long)MAX_LONG_LONG && sign == 1)
			return (-1);
		if (num > (long long)MAX_LONG_LONG && sign == -1)
			return (0);
	}
	return ((int)(num * sign));
}
