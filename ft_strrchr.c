/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:40:28 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/09 09:16:08 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	chr;

	chr = (char)c;
	len = ft_strlen(s);
	if (chr == '\0')
	{
		return (ft_strchr(s, '\0'));
	}
	while (len >= 0)
	{
		if (s[len] == chr)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
