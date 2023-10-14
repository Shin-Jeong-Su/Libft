/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:36:53 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 12:26:00 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const void *s = "hello world";
	printf("%s\n",ft_memchr(s,'k',20));
	printf("%s\n",memchr(s,'k',20));

}
*/
