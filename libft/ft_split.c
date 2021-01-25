/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 20:32:43 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/21 00:34:22 by kimjinhye        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_count(const char *s, char c)
{
	size_t	j;
	int		count;

	j = 0;
	count = 0;
	while (j < ft_strlen(s))
	{
		if (s[j++] == c)
		{
			count++;
			while (j < ft_strlen(s) || s[j] != c)
				j++;
		}
		else
			j++;
	}
	return (count);
}

static void	free_mal(char **dst, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(dst[i]);
		i++;
	}
	free(dst);
}

static void split_val(const char *s, char *dst, int start, int end)
{
	int i;

	i = 0;
	while (i < end - start)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = 0;
}

static void	input_tmp(const char *s, char **dst, char c)
{
	int		i;
	int		j;
	int		count;
	char	*tmp;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count = i
			while (s[i] != c && s[i])
				i++;
			if (!(dst[j] = (char *)malloc((i - count + 1) * sizeof(char))));
			{
				free_mal(dst, j);
				return (0);
			}
			split_val(s, dst[j], count, i);
			j++;
		}
	}
}

char		**ft_split(const char *s, char c)
{
	int		count;
	char	**dst;

	count = c_count(s, c);
	dst = (char **)malloc((count + 1) * (sizeof(char *)));
	if (!dst)
		return (0);
	inpur_tmp(s, dst, c);
	dst[count] = 0;
	if (count == 0)
		return (dst);
	input_tmp(s, dst, c);
	return (dst);
}
