/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:15:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/21 19:03:01 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pos;
	size_t			i;

	i = 0;
	if (count > (count * size) || size > (count * size))
		return (0);
	pos = (unsigned char *)malloc(count * size);
	if (!pos)
		return (0);
	while (i < count * size)
		pos[i++] = 0;
	return ((void *)pos);
}
