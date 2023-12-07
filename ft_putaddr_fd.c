/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:15:40 by jeshin            #+#    #+#             */
/*   Updated: 2023/12/07 17:15:56 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddr_fd(void *addr, int fd)
{
	unsigned long int			l;

	l = (unsigned long int)addr;
	write(fd,"0x",2);
	ft_puthex_fd(l,fd,0);
}