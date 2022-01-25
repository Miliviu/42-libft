/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:33:25 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/10 10:38:22 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checklong(char const *s, unsigned int start, size_t len)
{
	int	reallen;
	int	i;

	i = 0;
	reallen = 0;
	while (len > 0 && start < ft_strlen(s))
	{
		reallen++;
		i++;
		start++;
		len--;
	}
	return (reallen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	rtn = malloc((sizeof(char) * checklong(s, start, len)) + 1);
	if (rtn == 0)
		return (0);
	while (len > 0 && start < ft_strlen(s))
	{
		rtn[i] = s[start];
		i++;
		start++;
		len--;
	}
	rtn[i] = '\0';
	return (rtn);
}
