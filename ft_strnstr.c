/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 04:31:58 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 22:25:51 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate a substring in a string

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
