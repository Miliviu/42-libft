/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:51:42 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:40:18 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	tmp;
	int		rtrn;

	rtrn = 0;
	tmp = 0;
	if (n == 0)
		return (0);
	while (s1[tmp] == s2[tmp] && s1[tmp] != '\0' && s2[tmp] != '\0' \
	&& n - 1 > tmp)
		tmp++;
	return ((unsigned char)s1[tmp] - (unsigned char)s2[tmp]);
}
