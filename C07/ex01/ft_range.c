/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:27:04 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/14 17:10:26 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	tmp;

	if (min >= max)
		return (NULL);
	tmp = min;
	i = 0;
	while (tmp < max)
	{
		i++;
		tmp++;
	}
	tab = malloc(sizeof(int) * i);
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

/*int main()
{
	int *tab;
	int i;
	
	i = 0;
	tab = ft_range(8,8);
	while (i < 6)
		printf("%p\n",tab);
	return (0);
}
*/
