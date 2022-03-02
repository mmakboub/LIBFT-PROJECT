/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:43:18 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/02 23:41:02 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!(p))
		return (NULL);
	while (i < l)
	{
		p[i] = s1[i];
		i++;
	}
	p[l] = '\0';
	return (p);
}
