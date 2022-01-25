/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:02:05 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:53:55 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long int	ft_strlen(const char *s)
{
	unsigned long int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
