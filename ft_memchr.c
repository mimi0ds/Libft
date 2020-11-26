/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:26:51 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/25 01:46:31 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char *p;
	unsigned char ch;

	p = (unsigned char *)s;
	ch = (unsigned char)c;
	while (len--)
	{
		if (*p == ch)
			return (p);
		p++;
	}
	return (NULL);
}
