/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:28:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 11:36:09 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*(char *)s1 - *(char *)s2);
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
	const char *s = "hello";
	const char *d = "hellodworld";
	printf("%d\n",ft_strncmp(s,d,8));
	printf("%d\n",strncmp(s,d,8));
	return (0);
}
*/
