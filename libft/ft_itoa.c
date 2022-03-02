/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:59:19 by mmakboub          #+#    #+#             */
/*   Updated: 2021/12/02 23:52:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lencalculate(long int a)

{
	int	len;

	len = 0;
	if (a < 0)
	{
		a *= -1;
		len = 1;
	}
	while (a > 9)
	{
		a = a / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*p;
	long int	nbr;

	len = lencalculate(n);
	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	while (len--)
	{
		p[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
