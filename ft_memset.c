/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:28:09 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/28 10:35:25 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char *ch;

	p = (unsigned char *)b;
	ch = (unsigned char *)c;
	while (len--)
	{
		*p = ch;
		p++;
	}
	return ((void *)b);
}
