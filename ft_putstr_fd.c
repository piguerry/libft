/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:05:51 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 14:19:50 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int count;

	count = 0;
	if (s == 0 || fd == 0)
		return ;
	while (s[count])
	{
		ft_putchar_fd(s[count], fd);
		count++;
	}
}
