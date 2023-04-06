/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 03:27:20 by akaraban          #+#    #+#             */
/*   Updated: 2022/12/15 03:27:20 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size-bounded string copying and concatenaton 
// returns initial length of dst plus the length of src

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
