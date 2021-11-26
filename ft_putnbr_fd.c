/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:44:56 by nrahali           #+#    #+#             */
/*   Updated: 2021/11/26 19:13:35 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putnbr_fd(int nb, int fd)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		ft_putstr_fd("-", fd);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd(i % 10 + 48, fd);
}
/*
int main()
{
	int fd;
	fd = open("tesst.txt", O_CREAT | O_RDWR,777);
	ft_putnbr_fd(1337,fd);
}
*/
