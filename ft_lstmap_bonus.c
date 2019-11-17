/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:51:03 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/12 11:54:12 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *elem;
	t_list *begin;

	if (lst == 0)
		return (0);
	if (!(begin = ft_lstnew(lst->content)))
		return (0);
	begin->content = (*f)(begin->content);
	lst = lst->next;
	while (lst)
	{
		if (!(elem = ft_lstnew(lst->content)))
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		elem->content = (*f)(elem->content);
		ft_lstadd_back(&begin, elem);
		lst = lst->next;
	}
	return (begin);
}
