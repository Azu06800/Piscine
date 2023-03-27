/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:12:28 by nihamdan          #+#    #+#             */
/*   Updated: 2023/02/22 19:24:49 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	j;

	j = 0;
	while (tab[j])
	{
		if (f(tab[j++]))
			return (1);
	}
	return (0);
}
