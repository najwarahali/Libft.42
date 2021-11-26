/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:08:42 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:26:39 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	if (n == 0)
		return (0);
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (s3[i] != '\0' && (s3[i] == s4[i]) && i < n - 1)
		i++;
	return (s3[i] - s4[i]);
}
