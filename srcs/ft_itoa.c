/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:56:14 by jeshin            #+#    #+#             */
/*   Updated: 2023/10/10 23:12:41 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_digit(int n)
{
	int			len;
	long long	tmp;

	len = 0;
	tmp = (long long)n;
	if (tmp < 0)
	{
		len++;
		tmp *= -1;
	}
	while (tmp)
	{
		len++;
		tmp /= 10;
	}
	return (len);
}

void	get_plus(long long *l, int *idx, int *flg, char *str)
{
	if (*l < 0)
	{
		str[(*idx)++] = '-';
		*l *= -1;
		*flg = 0;
	}
}

char	*ft_itoa(int n)
{
	char		*ret;
	int			len;
	int			i;
	long long	l;
	int			flg;

	len = check_digit(n);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	l = (long long)n;
	i = 0;
	flg = 1;
	get_plus(&l, &i, &flg, ret);
	while (i < len)
	{
		ret[len - i - flg] = l % 10 + '0';
		l /= 10;
		i++;
	}
	ret[len] = 0;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_itoa(2147483647));
	printf("%s\n",ft_itoa(-2147483648));
}
*/