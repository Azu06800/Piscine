/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:49:40 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/23 17:52:53 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbrop(int n)
{
	unsigned int	s;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		s = -n;
	}
	else
		s = n;
	if (s > 9)
	{
		ft_putnbrop(s / 10);
		s %= 10;
	}
	ft_putchar(s + '0');
}

void	ft_putnbr(int n)
{
	ft_putnbrop(n);
	ft_putchar('\n');
}
