/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvudthic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:53:58 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/02 15:53:59 by pvudthic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	if (n < 0 && n > -10)
	{
		write(fd, "-", 1);
	}
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	if (n >= 0)
		x = '0' + n;
	else
		x = '0' - n;
	write(fd, &x, 1);
}