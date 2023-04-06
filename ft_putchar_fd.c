/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:06:15 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/11 21:24:09 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//outputs the character 'c' to the given file descriptor

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
