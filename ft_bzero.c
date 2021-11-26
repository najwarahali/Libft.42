/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:52:43 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:07:25 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*d;
	size_t			i;

	i = 0;
	d = (char *)s;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
