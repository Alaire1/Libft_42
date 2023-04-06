/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:06:07 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 21:31:23 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//outputs the string 's' to the given file descriptor

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
