/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:34:01 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/02 09:33:46 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			if (b == a)
				b++;
			while (c <= '9')
			{
				if (c == b)
					c++;
				ft_print(a, b, c);
				c++;
			}
			c = ++b;
		}
		b = ++a;
		c = b + 1;
	}
}

/*int main()
{
	ft_print_comb();
	return 0;
}
*/
