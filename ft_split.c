/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:49:57 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:14:46 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (count);
}

char	**words_all(char **dst, char const *s, char c)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	count = words(s, c);
	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		dst[j] = (ft_substr(s, temp, i - temp));
			j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (!s)
		return (NULL);
	len = words(s, c);
	dst = malloc(sizeof(char *) * (len + 1));
	if (!dst)
		return (NULL);
	return (words_all(dst, s, c));
}
