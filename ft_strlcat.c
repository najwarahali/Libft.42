/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:35:46 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:35:22 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	i = 0;
	ls = ft_strlen(src);
	if ((dstsize == 0 && !dst) || dstsize == 0)
		return (ls);
	ld = ft_strlen(dst);
	if (dstsize <= ld)
		return (dstsize + ls);
	if (dstsize > 0)
	{
		while (src[i] && (ld + i) + 1 < dstsize)
		{
			dst[ld + i] = src[i];
			i++;
		}
		dst[ld + i] = '\0';
	}
	return (ld + ls);
}
