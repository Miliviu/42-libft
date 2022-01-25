/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:39:50 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:57:10 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
