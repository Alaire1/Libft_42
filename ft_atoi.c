/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:46:44 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 15:26:28 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert an ASCII string to an integer

static int	ft_spacecheck(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (ft_spacecheck(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign *= -1;
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += *nptr++ - '0';
	}
	return (result * sign);
}
