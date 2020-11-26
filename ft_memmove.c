/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:27:56 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/24 05:22:21 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dstp;
	const unsigned char *srcp;

	dstp = (unsigned char *)dst;
	srcp = (const unsigned char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (*dstp < *srcp)
	{
		while (len--)
		{
			*dstp = *srcp;
			dstp++;
			srcp++;
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			dstp[len] = srcp[len];
		}
		return (dst);
	}
}
