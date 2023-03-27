/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:13:26 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/02 14:23:04 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	while (i != size)
	{
		j = i + 1;
		while (j != size)
		{
			if (tab[i] > tab [j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
	i++;
	}
}

/*int	main()
{
	int str[] = {7,1,8,4,3};
	int i = 0;
	int j = 5;

	ft_sort_int_tab(str,5);
	while (j--)
		printf("%d\n", str[i++]);
	return 0;
}
*/
