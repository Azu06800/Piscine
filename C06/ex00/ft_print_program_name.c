/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:44:36 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/10 12:49:38 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = argc;
	i = 0;
	while (argv[0][i])
		write (1, &argv[0][i++], 1);
	write (1, "\n", 1);
	return (0);
}
