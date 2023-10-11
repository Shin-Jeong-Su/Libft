/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:36:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 12:35:36 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const void *s1 = "";
	const void *s2 = "";
	printf("%d\n",ft_memcmp(s1,s2,20));
	printf("%d\n",memcmp(s1,s2,20));
}
*/
