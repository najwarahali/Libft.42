/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:12:18 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:09:55 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	if (n == 0)
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[i] == s4[i] && i < n - 1)
	{
		i++;
	}
	return (s3[i] - s4[i]);
}
