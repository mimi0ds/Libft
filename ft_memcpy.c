/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:27:42 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/24 05:35:18 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstp;
	const unsigned char	*srcp;

	dstp = (unsigned char *)dst;
	srcp = (const unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
	{
		*dstp = *srcp;
		dstp++;
		srcp++;
	}
	return (dst);
}
