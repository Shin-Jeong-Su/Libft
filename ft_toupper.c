/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <jeshin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:48:54 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/19 10:31:24 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int c = 99;
	printf("%c\n",ft_toupper(c));
	printf("%c\n",toupper(c));
}
*/
