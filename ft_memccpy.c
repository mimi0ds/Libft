/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:26:37 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/25 01:43:04 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dstp;
	unsigned char *srcp;
	unsigned char ch;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
	{
		*dstp = *srcp;
		if (*srcp == ch)
			return (dstp + 1);
		dstp++;
		srcp++;
	}
	return (NULL);
}
