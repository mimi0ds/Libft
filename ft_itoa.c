/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:24:05 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/25 02:06:36 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	int count;
	int sign;

	count = 0;
	sign = 0;
	if (n < 0)
	{
		sign += 1;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count + sign);
}

static char		*ft_make_string(int n, char *c)
{
	int len;
	int sign;

	sign = 0;
	len = ft_int_len(n);
	if (n < 0)
	{
		n *= -1;
		sign += 1;
	}
	c[len] = '\0';
	len--;
	while (n > 0)
	{
		if (sign == 1)
			c[0] = '-';
		c[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (c);
}

char			*ft_itoa(int n)
{
	char *c;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	c = (char *)malloc(sizeof(char) * (ft_int_len(n) + 1));
	if (c == NULL)
		return (NULL);
	return (ft_make_string(n, c));
}
