/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:09:54 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/01 17:40:51 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mb;
	unsigned char	sc;

	i = 0;
	mb = (unsigned char *)s;
	sc = (unsigned char)c;
	while (i < n)
	{
		if (mb[i] == sc)
			return ((void *)&mb[i]);
		i++;
	}
	return (NULL);
}
