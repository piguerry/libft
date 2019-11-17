/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:36:01 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/12 11:54:19 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (!(new->content = (void*)malloc(sizeof(void*))))
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
