/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:28:05 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/06 11:14:37 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = (char *)s;
	while (*pos)
		pos++;
	if (c == 0)
		return (pos);
	while (*(--pos))
	{
		if (*pos == c)
			return (pos);
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char *s = "helloworld";
	printf("%s\n",ft_strrchr(s,'h'));
	printf("%s\n",strrchr(s,'h'));
	return (0);
}
*/
