/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:40:42 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/02 13:12:51 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i++] = tmp;
	}
}

/*int	main()
{
	int str[] = {1,2,3,4,5};
	int i = 0;
	int j = 5;

	ft_rev_int_tab(str,5);
	while (j--)
		printf("%d\n", str[i++]);
	return 0;
}
*/
