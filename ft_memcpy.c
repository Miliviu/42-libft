/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:06:25 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:56:10 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		tmp;
	char		*s;
	char		*d;

	d = (char *)dest;
	s = (char *)src;
	tmp = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (tmp < n)
	{
		d[tmp] = s[tmp];
		tmp++;
	}
	return (dest);
}
