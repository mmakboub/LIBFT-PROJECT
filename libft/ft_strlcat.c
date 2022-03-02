/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:41:25 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/02 22:14:12 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(dst);
	if (n > dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && i + n < dstsize - 1 && dstsize != 0)
	{
		dst[i + n] = src[i];
		i++;
	}
	dst[i + n] = '\0';
	return (ft_strlen(src)+ n);
}
