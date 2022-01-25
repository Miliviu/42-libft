/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhagon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:07 by juhagon           #+#    #+#             */
/*   Updated: 2021/11/10 10:50:37 by juhagon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*rtn;

	rtn = malloc(sizeof(t_list));
	if (!rtn)
		return (NULL);
	rtn->content = content;
	rtn->next = NULL;
	return (rtn);
}
