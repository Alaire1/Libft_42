/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:06:44 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 20:46:39 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i += 1;
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	itoa_make(char *digits, int n)
{
	int				i;
	unsigned int	nb;

	i = count_size(n) + 1;
	if (n < 0)
		nb = (unsigned int)(n * -1);
	else
		nb = (unsigned int)n;
	digits[--i] = 0;
	while (--i >= 0 && nb)
	{
		digits[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n == 0)
		digits[i] = '0';
	if (n < 0)
		digits[i] = '-';
}

//convert int into a string

char	*ft_itoa(int n)
{
	char	*digits;

	digits = NULL;
	digits = malloc(sizeof(char) * (count_size(n) + 1));
	if (digits == NULL)
		return (NULL);
	itoa_make(digits, n);
	return (digits);
}
