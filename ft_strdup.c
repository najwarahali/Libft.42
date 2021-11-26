/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:30:11 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:17:00 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
