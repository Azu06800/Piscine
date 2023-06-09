/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:51:56 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/23 17:51:59 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
		else if (av[2][0] == '-')
			ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
		else if (av[2][0] == '%' && av[3][0] == '0')
			write(1, "Stop : modulo by zero\n", 23);
		else if (av[2][0] == '/' && av[3][0] == '0')
			write(1, "Stop : division by zero\n", 24);
		else if (av[2][0] == '/')
			ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
		else if (av[2][0] == '*')
			ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
		else if (av[2][0] == '%')
			ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
		else if (av[2][0] != '+' && av[2][0] != '-'
		&& av[2][0] != '/' && av[2][0] != '*' && av[2][0] != '%')
			ft_putnbr(0);
	}
	return (0);
}
