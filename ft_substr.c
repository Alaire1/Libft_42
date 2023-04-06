/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:08:00 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 22:20:40 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a substring from string s

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*memo;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	memo = (char *)malloc(sizeof(char) * (len + 1));
	if (!memo)
		return (NULL);
	i = 0;
	while (i < len)
	{
		memo[i] = s[start + i];
		i++;
	}
	memo[i] = '\0';
	return (memo);
}
