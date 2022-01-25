/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:10:14 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/08 15:37:45 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	b;
	size_t	len;

	len = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	b = 0;
	if (dstsize < ft_strlen(dst) + 1)
		return (ft_strlen(src) + dstsize);
	while (dst[i])
		i++;
	if (dstsize)
	{
		while (src[b] && i + 1 < dstsize)
		{
			dst[i] = src[b];
			i++;
			b++;
		}
	}
	if (i < dstsize)
		dst[i] = '\0';
	dst[i] = '\0';
	return (len);
}
