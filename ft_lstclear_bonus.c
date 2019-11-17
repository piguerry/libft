/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:38:19 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/12 11:53:34 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *cursor;
	t_list *buff;

	if (lst == 0 || *lst == 0)
		return ;
	cursor = *lst;
	buff = 0;
	while (cursor)
	{
		if (cursor->next)
			buff = cursor->next;
		else
			buff = 0;
		ft_lstdelone(cursor, (*del));
		cursor = buff;
	}
	*lst = 0;
}
