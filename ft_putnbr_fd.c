/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:07:28 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:56:27 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int i, int fd)
{
	long	x;

	x = i;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		x = -x;
	}
	if (x < 10)
		 ft_putchar_fd(x + '0', fd);
	else if (x > 0)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd(x % 10 + '0', fd);
	}
}
