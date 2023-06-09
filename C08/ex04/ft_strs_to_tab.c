/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:10:46 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/21 14:42:44 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	tab = malloc((ft_strlen(src) * sizeof(char *) + 1));
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (ac > i)
	{
		tab[i].size = ft_strlen (av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return ((struct s_stock_str *)tab);
}

/*int main()
{
	char *strs[] = {"Hello","bonjour","coucou"};
	t_stock_str *tab = ft_strs_to_tab(3, strs);
	int i = 3;
	printf("%d\n", tab[i].size);
	printf("%s\n", tab[i].str);
	printf("%s\n", tab[i].copy);
	return (0);
}
*/
