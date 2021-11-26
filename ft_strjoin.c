/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:45:23 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:17:48 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s;
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char)));
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	s[ft_strlen(s1) + i] = '\0';
	return (s);
}
