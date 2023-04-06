/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:16:02 by akaraban          #+#    #+#             */
/*   Updated: 2023/02/13 01:44:19 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return a new string which is a result
//of contcatenation of two given strings

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		result[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[j++] = s2[i];
		i++;
	}
	result[j] = 0;
	return (result);
}
