/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:44:08 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/12 11:54:24 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	if (lst == 0)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
