/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:06:53 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 21:32:38 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static int	word_count(char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		i = 0;
		while (*str && (*str == c))
			str++;
		i = word_len(str, c);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

static char	*str_duplicate(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(char) * (j + 1));
	if (!dst)
		return (NULL);
	while (src[i] && i < j)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**str_split(char const *s, char c, char **dest, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		j = word_len((char *)s, c);
		dest[i] = str_duplicate((char *)s, j);
		if (!dest[i])
		{
			while (i > 0)
			{
				free(dest[i - 1]);
				i--;
			}
			free(dest);
			return (NULL);
		}
		s += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}

//splits the string based on the delimiter c

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		size;

	if (!s)
		return (NULL);
	size = word_count((char *)s, c);
	dest = malloc(sizeof(char *) * (size + 1));
	if (!dest)
		return (NULL);
	dest = str_split(s, c, dest, size);
	return (dest);
}
