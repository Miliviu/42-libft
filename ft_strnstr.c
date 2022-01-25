/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:44:02 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/09 10:01:22 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	c;
	int		d;

	c = 0;
	d = 0;
	if ((len <= 0 && *to_find == 0) || ((!*str) && *to_find <= 0))
		return ((char *)str);
	if (!*str)
		return (NULL);
	c = ft_strlen(to_find);
	while (len >= c && *str)
	{	
		if (!(ft_strncmp(str, to_find, c)))
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}
