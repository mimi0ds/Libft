/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:25:14 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/27 02:17:06 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				trim_front(const char *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t start;

	i = 0;
	start = ft_strlen(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
		{
			start = i;
			break ;
		}
		i++;
	}
	return (start);
}

int				trim_back(const char *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t end;

	i = ft_strlen(s1) - 1;
	end = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
		{
			end = i;
			break ;
		}
		i--;
	}
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		end;
	size_t		len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = trim_front(s1, set);
	end = trim_back(s1, set);
	if (end < start)
		len = 0;
	else
		len = end - start + 1;
	str = ft_substr(s1, start, len);
	return (str);
}
