/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:06:10 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/17 16:15:53 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	l;

	l = n;
	if (n < 0)
	{
		l *= -1;
		write(fd, "-", 1);
	}
	if (l < 10)
	{
		c = l + '0';
		write(fd, &c, 1);
		return ;
	}
	else if (l >= 10)
	{
		ft_putnbr_fd(l / 10, fd);
		c = (l % 10) + '0';
		write(fd, &c, 1);
		l /= 10;
	}
}
/*
int main()
{
	ft_putnbr_fd(-2147483648,1);
	write(1,"\n\n",3);
	ft_putnbr_fd(2147483647,1);
}
*/