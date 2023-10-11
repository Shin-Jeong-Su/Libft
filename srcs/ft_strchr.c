/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:28:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 10:57:38 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pos;

	pos = (char *)s;
	while (*pos)
	{
		if (*pos == c)
			return (pos);
		pos++;
	}
	if (!c)
		return (pos);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char *s = "hello";
	printf("%s\n",ft_strchr(s,'6'));
	printf("%s\n",strchr(s,'6'));
	return (0);
}
*/
