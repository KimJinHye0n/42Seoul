/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:50:26 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/26 20:30:54 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeof_n(long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

void	while_loof(char *dst, int n, int size)
{
	if (n == 0)
		dst[0] = '0';
	if (n < 0)
		n = -1 * n;
	while (n)
	{
		size--;
		dst[size] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*dst;

	sign = (n < 0) ? 1 : 0;
	size = sizeof_n(n);
	if (sign)
		size++;
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (0);
	dst[size] = 0;
	if (n == -2147483648)
	{
		dst[1] = 2 + '0';
		while_loof(dst, 147483648, 11);
	}
	else
		while_loof(dst, n, size);
	if (sign)
		dst[0] = 45;
	return (dst);
}
