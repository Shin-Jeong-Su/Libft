/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:48:54 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/19 10:31:20 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int c = 'Z';
	printf("%c\n",ft_tolower(c));
	printf("%c\n",tolower(c));
}
*/
