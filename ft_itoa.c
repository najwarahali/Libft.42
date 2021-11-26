/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:12:12 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:07:48 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_int(long int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = n * (-1);
		count = 2;
	}
	while (n > 9)
	{
		n = (n / 10);
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	long int	nb;
	char		*s;

	nb = n;
	count = count_int(n);
	s = malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	s[count] = '\0';
	count--;
	if (n < 0)
		nb = -nb;
	while (count >= 0)
	{
		s[count] = (nb % 10) + 48;
		nb = nb / 10;
		count--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*
#include <stdio.h>
int	main()
{
	char *i1 = ft_itoa((-2147483648));
	printf("%s",i1);
}
*/
