/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:32:02 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:56:07 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				tmp;
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	tmp = 0;
	if (n == 0)
		return (0);
	while (src1[tmp] == src2[tmp] && n - 1 > tmp)
		tmp++;
	return (src1[tmp] - src2[tmp]);
}
