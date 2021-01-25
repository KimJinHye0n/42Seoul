/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 23:50:26 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/17 15:10:19 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeof_n(long n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	int		size;
	long	n_long;
	int		sign;
	char	*dst;

	sign = (n > 0) ? 0 : 1;
	n_long = (n > 0) ? ((long)n) : (-1 * (long(n)));
	size = (sign == 1) ? (sizeof_n(n_long) + 1) : (sizeof_n(n_long));
	if (!(dst = malloc((size + 1) * sizeof(char))))
		return (0);
	dst[size] = '\0';
	while (size-- && n)
	{
		dst[size] = n % 10;
		n = n / 10;
	}
	if (sign)
		dst[size] = "-";
	return (dst);
}
