/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:28:41 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/11 09:59:44 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

static void	set_neg(long *n)
{
	if (n[0] < 0)
	{	
		n[0] *= -1;
		n[1] = 2;
	}
	else
		n[1] = 1;
}

char	*ft_itoa(int n)
{
	char		*rtn;
	long		x[2];
	int			digits;

	x[0] = n;
	set_neg(x), digits = count_digits(n);
	rtn = malloc(sizeof(char) * digits + x[1]);
	if (!rtn)
		return (NULL);
	if (x[1] == 2)
		rtn[digits + 1] = '\0';
	else
		rtn[digits--] = '\0';
	while (x[0] >= 10)
	{
		rtn[digits--] = (x[0] % 10) + '0';
		x[0] = x[0] / 10;
	}
	if (x[0] < 10 && x[0] != 0)
		rtn[digits] = x[0] + '0';
	else if (x[0] == 0)
		rtn[digits] = '0';
	if (x[1] == 2)
		rtn[0] = '-';
	return (rtn);
}
