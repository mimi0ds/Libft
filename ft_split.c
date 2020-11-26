/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuroki <hkuroki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 22:17:22 by hkuroki           #+#    #+#             */
/*   Updated: 2020/11/26 19:39:53 by hkuroki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			word_count(char *s, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

static int			cnt_elm(char *s, int c)
{
	int len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char			**all_free(char **res, int cur)
{
	int i;

	i = 0;
	while (i < cur)
	{
		free(res[i]);
		i++;
	}
	i++;
	return (NULL);
}

static char			**insert_word(int wc, char *s, int c, char **res)
{
	int i;
	int j;
	int len;

	i = 0;
	while (i < wc)
	{
		while (*s != '\0' && *s == c)
			s++;
		len = cnt_elm(s, c);
		res[i] = malloc(sizeof(char) * (len + 1));
		if (res[i] == NULL)
			return (all_free(res, i));
		j = 0;
		while (j < len)
		{
			res[i][j] = *s;
			s++;
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char				**ft_split(char const *s, char c)
{
	char			**res;
	int				wc;

	if (s == NULL)
		return (NULL);
	wc = word_count((char*)s, c);
	res = malloc(sizeof(char*) * (wc + 1));
	if (res == NULL)
		return (NULL);
	res = insert_word(wc, (char*)s, c, res);
	return (res);
}
