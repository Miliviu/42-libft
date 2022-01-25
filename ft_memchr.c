/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:59:47 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:39:57 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	char				*src;
	char				chr;

	src = (char *)s;
	chr = (char)c;
	i = 0;
	while (i < n)
	{
		if (*src == chr)
			return ((void *)src);
		src++;
		i++;
	}
	return (NULL);
}
