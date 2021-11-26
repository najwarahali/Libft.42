/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:10:30 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:28:58 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_find(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (!to_find(set, s1[i]))
			break ;
		i++;
	}
	while (len > 0)
	{
		if (!to_find(set, s1[len]))
			break ;
		len--;
	}
	return (ft_substr(s1, i, (len - i + 1)));
}
