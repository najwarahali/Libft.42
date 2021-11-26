/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:46:46 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:17:18 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include "libft.h"
#include <stdio.h>
void ch(unsigned int i, char *c)
{
	 *c += i;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main()
{
	char s[]= "00000000000";
	ft_striteri(s, ch);
	printf("%s",s);
}
*/
