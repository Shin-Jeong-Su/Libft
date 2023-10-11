/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:29:08 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/05 18:46:24 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len)
	{
		((char *)b)[i] = c;
		i++;
		len--;
	}
	return (b);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char src1[10] = {0};
	char src2[10] = {0};
	printf("%s\n",src1);
	printf("%s\n",src2);
	ft_memset(src1,65,9);
	memset(src2,65,9);
	printf("%s\n",src1);
	printf("%s\n",src2);
}
*/
