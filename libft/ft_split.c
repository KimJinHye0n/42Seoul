/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 20:32:43 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/31 16:10:28 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_word(char const *s, char c)
{
	size_t	word_count;
	size_t	onoff;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	onoff = 1;
	word_count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			onoff = 1;
		}
		else if (s[i] != c && onoff)
		{
			word_count++;
			onoff = 0;
		}
		i++;
	}
	return (word_count);
}

static	void	free_dst(char **dst)
{
	size_t	i;

	i = 0;
	while (dst[i])
	{
		free(dst[i]);
		i++;
	}
	free(dst);
}

static	void	put_string(char *dst, char const *s, size_t start, size_t end)
{
	size_t	len;
	size_t	i;

	len = end - start;
	dst[len] = 0;
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
}

static	int		one_split(char **dst, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			if (!(dst[j] = (char *)malloc((i - start + 1) * sizeof(char))))
			{
				free_dst(dst);
				return (0);
			}
			put_string(dst[j], s, start, i);
			j++;
		}
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		count;

	if (!s)
		return (0);
	count = num_word(s, c);
	if (!(dst = (char **)malloc((count + 1) * sizeof(char *))))
		return (0);
	dst[count] = 0;
	if (!(one_split(dst, s, c)))
		return (0);
	return (dst);
}
