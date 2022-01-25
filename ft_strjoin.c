/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:13:50 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:56:52 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*rtn;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	rtn = malloc((sizeof(char) * len) + 1);
	if (!rtn)
		return (NULL);
	while (s1[i])
	{
		rtn[i] = s1[i];
		i++;
	}
	while (s2[j])
		rtn[i++] = s2[j++];
	rtn[i] = '\0';
	return (rtn);
}
