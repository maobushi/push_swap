/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maobushi <maobushi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:33:41 by maobushi          #+#    #+#             */
/*   Updated: 2023/01/17 10:06:05 by maobushi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../src/push_swap.h"

long ft_atol(char* str)
{
	long long	ln;
	size_t		n;
	int			sign;

	sign = 1;
	ln = 0;
	n = 0;
	while (str[n] == 32 || (9 <= str[n] && str[n] <= 13))
		n++;
	if (str[n] == '-')
		sign *= -1;
	if (str[n] == '+' || str[n] == '-')
		n++;
	while ('0' <= str[n] && str[n] <= '9')
	{
		if (ln != ((ln * 10) + (str[n] - '0') * sign) / 10 && sign > 0)
			return ((long)LLONG_MAX);
		if (ln != ((ln * 10) + (str[n] - '0') * sign) / 10 && sign < 0)
			return ((long)LLONG_MIN);
		ln = (ln * 10) + (str[n] - '0') * sign;
		n++;
	}
	return (ln);
}