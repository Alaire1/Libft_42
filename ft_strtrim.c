/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:35:56 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 22:28:45 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocates with malloc and returns a copy of s1 with the
//characters from set removed from the beginning and the end

static int	find_start(char const *s1, char const *set)
{
	int		start;
	int		i;
	int		count;

	start = 0;
	while (s1[start] != '\0')
	{
		i = 0;
		count = 0;
		while (set[i] != '\0')
		{
			if (s1[start] != set[i])
				count++;
			i++;
		}
		if (count == i)
			return (start);
		start++;
	}
	return (-1);
}

static int	find_end(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		count;

	end = (int)ft_strlen(s1) - 1;
	while (end >= 0)
	{
		i = 0;
		count = 0;
		while (set[i] != '\0')
		{
			if (s1[end] != set[i])
				count++;
			i++;
		}
		if (count == i)
			return (end);
		end--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	i = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start == -1)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = 0;
		return (result);
	}
	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (result == 0)
		return (NULL);
	while (i <= end - start)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
