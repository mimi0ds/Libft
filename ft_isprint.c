/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:26:25 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/21 04:04:38 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7E)
		return (1);
	return (0);
}
