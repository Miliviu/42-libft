/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:55:59 by juhagon           #+#    #+#             */
/*   Updated: 2022/01/25 09:51:06 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	numwords;

	i = 0;
	numwords = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		numwords++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (numwords);
}

static void	freemem(char **rtn, int numwords)
{
	while (numwords > 0)
	{
		free(rtn[numwords]);
		numwords--;
	}
	free(rtn);
}

static char	**ft_split_aux(int i, char const *s, char c, char **rtn)
{
	int	k[3];

	k[2] = 0;
	while (s[i])
	{
		k[1] = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		rtn[k[2]] = malloc(sizeof(char) * (i - k[1] + 1));
		if (!rtn[k[2]])
		{
			freemem(rtn, k[2]);
			return (NULL);
		}
		i = k[1];
		k[0] = 0;
		while (s[i] != c && s[i] != '\0')
			rtn[k[2]][k[0]++] = s[i++];
		rtn[k[2]++][k[0]] = '\0';
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	rtn[k[2]] = NULL;
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	rtn = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!rtn)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	rtn = ft_split_aux(i, s, c, rtn);
	return (rtn);
}
