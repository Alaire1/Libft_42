/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:21:53 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 21:24:51 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//outputs the int n to the given file descriptor

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}
