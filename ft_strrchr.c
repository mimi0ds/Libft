/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:30:34 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/25 02:44:59 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	find;
	int		i;

	str = (char *)s;
	find = (char)c;
	i = 0;
	while (str[i])
		i++;
	while (&str[i] != &str[0] && str[i] != find)
		i--;
	if (str[i] == find)
		return (&str[i]);
	return (NULL);
}
