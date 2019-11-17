/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:45:47 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 15:27:32 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	int				len;
	char			*str;

	len = 0;
	count = 0;
	if (s == 0)
		return (0);
	while (s[len])
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s[count])
	{
		str[count] = (*f)(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
