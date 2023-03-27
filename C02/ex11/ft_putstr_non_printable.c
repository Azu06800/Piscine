/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:31:03 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/08 11:46:10 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_char_is_non_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

void	ft_print_hexa(int nb)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb >= 16)
		ft_print_hexa(nb / 16);
	write(1, &hexa[nb % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_non_printable(str[i]))
		{
			write (1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_print_hexa(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

/*int main()
{
	char str[] = "Coucou\ntu \tv\as \bien ?";
	str[3] = -126;
	ft_putstr_non_printable(str);
}
*/
