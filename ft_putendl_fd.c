/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:11:09 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 14:20:02 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
