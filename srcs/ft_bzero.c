/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:48:59 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/05 19:15:26 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pos;
	size_t	i;

	pos = (char *)s;
	i = 0;
	while (i < n)
	{
		pos[i] = 0;
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	char s1[6] = "hello";
	char s2[6] = "hello";
	printf("%s\n",s1);
	printf("%s\n",s2);
	ft_bzero(s1,2);
	bzero(s2,2);
	write(1,s1,5);
	write(1,"\n",1);
	write(1,s2,5);

	return (0);

}
*/
