/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:19:11 by akaraban          #+#    #+#             */
/*   Updated: 2023/02/13 01:44:29 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate first occurence of character in string

char	*ft_strchr(char const *s, int c)
{	
	while (*s != (unsigned char) c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}
