/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:54:23 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/07 22:30:08 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ret;
	char	*tmp;

	len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * len + 1);
	tmp = ret;
	while (*s1)
	{
		*tmp = *s1;
		tmp++;
		s1++;
	}
	*tmp = 0;
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char *src = "hello world";
	printf("%s\n",ft_strdup(src));
	printf("%s\n",strdup(src));
}
*/
