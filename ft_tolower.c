/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban.student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:07:15 by akaraban          #+#    #+#             */
/*   Updated: 2022/12/31 03:34:24 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converts to lowercase

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
