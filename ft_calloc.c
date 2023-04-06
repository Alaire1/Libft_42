/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 04:42:29 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 20:59:24 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//contiguous allocation of blocks of memory of the specified type

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = (char *)malloc(nmemb * size);
	if (memory == NULL)
		return (0);
	while (i < nmemb * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
