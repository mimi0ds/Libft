/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 04:06:04 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/26 21:14:01 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*str;
	char	to_find;
	int		i;

	str = (char *)s;
	to_find = (char)c;
	i = 0;
	while (str[i] && str[i] != to_find)
		i++;
	if (str[i] == to_find)
		return (&str[i]);
	return (NULL);
}
