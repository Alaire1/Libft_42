/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 04:44:41 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 21:51:22 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicate a string

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*ptr;

	size = 0;
	size = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
