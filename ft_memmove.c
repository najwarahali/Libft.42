/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:51:41 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:12:03 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (s == d)
		return (d);
	if (d > s)
	{
		while (i < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
		return (dst);
	}
	if (s > d)
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
