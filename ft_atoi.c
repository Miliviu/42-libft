/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:53:17 by juhagon           #+#    #+#             */
/*   Updated: 2022/02/04 11:49:22 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *s)
{
	long int	tmp;
	long int	nmb;
	long int	sign;

	tmp = 0;
	nmb = 0;
	sign = 0;
	while (s[tmp] == 32 || (s[tmp] > 8 && s[tmp] < 14))
		tmp++;
	if (s[tmp] == '+')
		tmp++;
	else if (s[tmp] == '-')
	{
		tmp++;
		sign = 1;
	}
	while (s[tmp] >= '0' && s[tmp] <= '9')
	{
		nmb = nmb * 10 + s[tmp] - '0';
		tmp++;
	}
	if (sign == 1)
		nmb = -nmb;
	return (nmb);
}
